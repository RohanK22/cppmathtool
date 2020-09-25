#include "H:\PROJECT\finpro\graph.h"
#include<graphics.h>
void main()
{
	initialize_graphics();
	//intro();
	int choice;
	int x=getmaxx();
	int y=getmaxy();
	int sx=x/2;
	int sy=y/2;
	do{
		initialize_graphics();
		initialize_background();
		cout<<" \t\t\t\t MENU BAR\n"
		    <<"1.Linear\n"
		    <<"2.Quadratic\n"
		    <<"3.Cubic\n"
		    <<"4.Waves\n"
		    <<"5.Circle\n"
		    <<"6.Ellipse\n"
		    <<"7.Additional Trignometric and Algebraic Functions\n"
		    <<"8.EXIT\n"
		    <<"9.Bubble sort visualization\n"
		    <<"10.Custom function graphing\n"
		    <<"11.Fourier\n"
		    <<"12.Selection\n";
		cout<<"\n\t Enter your choice:";
		cin>>choice;
		switch(choice)
		{
		 case 1: linear();getch();break;
		 case 2: quadratic();getch();break;
		 case 3: cubic();getch();break;
		 case 4: sine();getch();break;
		 case 5: circle();getch();break;
		 case 6: ellipse();getch(); break;
		 case 7:trig();break;
		 case 8:exit(0);//outro();break;
		 case 9:bubble();break;
		 case 10:g();break;
		 case 11:fourier();break;
		 case 12:selection_sort();break;
		 }
	}while(choice!=8);

}




