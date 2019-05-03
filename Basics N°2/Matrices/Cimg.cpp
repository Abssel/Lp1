#include "CImg.h"
using namespace cimg_library;

#include <iostream>

using namespace std;


int main()
{
	int d=3;
	float kernelx[d][d];
     
	kernelx[0][0] =-1;
	kernelx[0][1] =0;
	kernelx[0][2] =1;
	kernelx[1][0] =-5;
	kernelx[1][1] =0;
	kernelx[1][2] =2;
	kernelx[2][0] =-1;
	kernelx[2][1] =0;
	kernelx[2][2] =1;

	CImg<int> src("milla.bmp");
	
	src.display();
	
	cout << src.width() << endl;
	cout << src.height() << endl;


	int ** G = new int * [src.width()];
	G[0] = new int[src.width() * src.height()];
	for(int i = 1; i < src.width(); i++)
                G[i] = G[i - 1] + src.height();

     
	
	int ** S = new int * [src.width()];      
    S[0] = new int[src.width() * src.height()];
	for(int i = 1; i < src.width(); i++)
                S[i] = S[i - 1] + src.height();                 
	   
	int ** RGB[3];
	for(int k = 0; k < 3; k++)
	{
		int **& img = RGB[k];
                img = new int * [src.width()];
	
		img[0] = src.data(0, 0, 0, k);
		for(int i = 1; i < src.width(); i++)
                        img[i] = img[i - 1] + src.height();
        }
        
        for(int i = 0; i < src.width(); i++)
                for(int j = 0; j < src.height(); j++)
                      G[i][j] = (RGB[0][i][j] + RGB[1][i][j] + RGB[2][i][j])/3 ;
		
		
 		for(int i = 0; i < src.width(); i++)
                for(int j = 0; j < src.height(); j++)
                {
                	if (i==0|| j==0|| i==src.width()-1|| j==src.height()-1)
                	{
                	
						S[i][j]= G[i][j];
								
					}
					else
					{
						S[i][j]=	G[i-1][j-1] * kernelx[0][0] +
								G[i-1][j] * kernelx[0][1] +
								G[i-1][j+1] * kernelx[0][2] +
								G[i][j-1] * kernelx[1][0] +
								G[i][j] * kernelx[1][1] +
								G[i][j+1] * kernelx[1][2] +
								G[i-1][j-1] * kernelx[2][0] +
								G[i-1][j] * kernelx[2][1] +
								G[i+1][j+1] * kernelx[2][2];
					}

								
						
				//	cout <<" holis "<<S[i][j];
			}
            	
               		
		
        CImg<int> gray(G[0], src.width(), src.height(), 1, 1, 1);
		CImg<int> sobel(S[0], src.width(), src.height(), 1, 1, 1);

	(src,gray,sobel).display();

	delete [] RGB[0];
	delete [] RGB[1];
	delete [] RGB[2];
	delete [] G[0];
	delete G;
	delete [] S[0];
	delete S;
	
	return 0;
}


