#include<bits/stdc++.h>
#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
//#include<graphics.h>
//for frst page of graphics
class Display
{
  private:
  int i,j;
  public:
  void start();
};

void Display::start()
{
    cleardevice();
    setbkcolor(BLACK);
    setcolor(RED);
    for(i=0;i<640;i++)
    line(i,0,i,500);
    for(i=320,j=320;i>=50;i--,j++)
    {
     setcolor(0);
     line(i,0,i,500);line(j,0,j,500);
     delay(1);
    }
    setcolor(MAGENTA);
    j=200;i=7;
    settextstyle(1,HORIZ_DIR,i);
    outtextxy(j,100," K ");
    delay(250);
    outtextxy(j,100,"Ka");
    delay(250);
    outtextxy(j,100," Kau ");
    delay(250);
    outtextxy(j,100," Kaun ");
    delay(250);
    outtextxy(j,175,"B ");
    delay(250);
    outtextxy(j,175,"Ba ");
    delay(250);
    outtextxy(j,175,"Ban ");
    delay(250);
    outtextxy(j,175,"Bane ");
    delay(250);
    outtextxy(j,175,"Baneg ");
    delay(250);
    outtextxy(j,175,"Banega ");
    delay(250);
    j=135;
    outtextxy(j,250," C");
    delay(250);
    outtextxy(j,250," Cr");
    delay(250);
    outtextxy(j,250," Cro");
    delay(250);
    outtextxy(j,250," Cror");
    delay(250);
    outtextxy(j,250," Crore");
    delay(250);
    outtextxy(j,250," Crorep");
    delay(250);
    outtextxy(j,250," Crorepa");
    delay(250);
    outtextxy(j,250," Crorepat");
    delay(250);
    outtextxy(j,250," Crorepati");
    delay(250);
    outtextxy(240,330,"...?... ");
    settextstyle(5,HORIZ_DIR,2);
    outtextxy(105,400,"by-NIKHIL,PARIDHI,SARNAV,NANDINI");
    setcolor(YELLOW);
    settextstyle(7,HORIZ_DIR,1);
    for(i=0;i<450;i+=20)
    {
    outtextxy(80,i,"$");
    outtextxy(550,i,"$");
    delay(205);
    }
    getch();
    setcolor(CYAN);
    for(i=0;i<320;i+=5)
        {
            delay(20);
            line(i,0,i,500);
            line(638-i,0,638-i,500);
        }
    //exit(0);
    cleardevice();
    setbkcolor(0);
}
//end of graphics page class
using namespace std;
int cntll[3]={1,1,1};//HASH
int loop=0;
    stack< pair<int,string> >life;
    vector<pair<int,string> >lines;
    stack<pair<int,string> >cpy;
string q[]={" ","Which is the longest day in year?\n",
"Which of these sounds would you associate with the heart?\n",
"Who is the 'Bharat Ka Veer Putra Aaccording to the title of a 2013 TV Series?\n",
"In 2013, where did the natural calamity known as Himalayan tsunami occur?\n",
"Who wrote the introduction to the English translation of Rabindranath Tagore’s Gitanjali?\n",
"Which of these terms can only be used for women?\n",
"Which of these sports requires you to shout out a word loudly during play?\n",
"In which of the following events will the fastest person win?\n",
"What is the main ingredient of Kulcha in Matar Kulcha or Chole Kulcha?\n",
"According to a song filmed on Farhan Akhtar,MASTO KA JHUND,will do on a desolate night?\n",
"In which of these games does a player have to target Animated Pigs?\n",
"In which city is The Famous Taj Mahal Situated?\n",
"Who is the only Indian prime minister whose signature is found on currency notes?\n",
"Which of these would you find written on cigarette packets sold in India?\n",
"On the world map which of these elements does the color blue represent?\n",
"In the Gregorian calendar, which of these years will have 29 days in February?\n",
"Who is the author of the books TRAIN TO PAKISTAN and COMPANY OF WOMEN?\n",
" Which of these is a unit of measurement named after an English scientist?\n",
"Which of these is not a computer file format for music storage?\n",
"Which of these units of currency is also the name of a unit of weight?\n",
"Which of these brand names also means ‘one-billionth part of something’?\n",
"Fields medal is a prestigious international honour given in which subject?\n",
"The playing area of which of these sports has a net dividing it in the centre?\n",
"The use of the break statement in a switch statement is\n",
"If no exception is thrown ________\n"};
string a[]={" ","ten december","Tring Tring","Tipu Sultan","Uttarakhand","P.B. Shelley","Suhagan","Chess","Marathon","Daal","Bhajan Sunayenge","Temple Run","Shikarpur","Indira Gandhi","Smoking drills","Plains","2015","Salman Rushdie","Joule","mp3","Dollar","Nano","Mathematics","Squash","optional","a catch block will cause an error"};
string b[]={" ","24 June","Trap Trap","Chandragupta Maurya","Arunachal Pradesh","T.S. Elliot","Sushil","Ludo","Diving","Maida","Havan Karenge","Candy Crush Saga","Agra","Morarji Desai","Smoking chills","Mountains","2016","KhushWant Singh","Candela","AAC","Pound","Vista","Computer Science","Basket Ball","compulsary","the first catch block coded will execute"};
string c[]={" ","31 May","Click Click","Maharana Pratap","Jammu and kashmir","W.B.Yeats","Chiranjeevi","Playing Cards","Weight Lifting","Besan","Khel Khelenge","Angry Birds","Mumbai","Manmohan Singh","Smoking kills","Water Bodies","2017","Jhumpa Lahiri","Radian","MKV","EURO","Bolt","History","Volley Ball","not allowed. It gives an error message","the last catch block coded with execute"};
string d[]={" ","5 December","Dhak Dhak","Ashoka","Sikkim","Alfred Tennyson"," Dirghaayu","Kho Kho","Shot Put","Suji","Gubbare Phodenge","Super Mario Bros",
"Pune","Inder Kumar Gujral","Smoking thrills","Roads","2018","Mulk Raj Anand","Mole","JPEG","Rupee","Sumo","Literature","Cricket","to check an error","any catch blocks coded with be bypassed"};

int ans[]={-1,2,4,3,1,3,1,4,1,2,2,3,2,3,3,3,2,2,1,4,2,1,1,3,1,4};
int askedq[15]={0};
int winning[16]={0,5000,10000,20000,40000,80000,160000,320000,640000,1225000,2500000,5000000,100000000,300000000,500000000,700000000};
int winindex=0,ques=0;
//int qcreatei=0;
struct node
{
 char option;
 string name;
 int pri;
 node* link;
}*head;
int answer(struct node *head,char op)
{
	struct node * p=head;
	while(p!=NULL)
	{
	if(p->option==op && p->pri==1)
	  return 1;
	  p=p->link;
    }
 return 0;
}
void quit()
{int i;
	cout<<"Well, Played Buddy .!!\n Your Total Winning Amount is ";//<<
	for( i=loop;i>=1;i--)
	{
		if(i==4||i==8||i==15)
		break;
	}
	 cout<<winning[i]<<endl;
}
void safequit()
{
    cout<<"Well, Played Buddy .!!\n Your Total Winning Amount is "<< winning[loop]<<endl;
}
node* fifty(struct node *head)
{
	struct node * p=head;
	struct node *h=new node;//new link list
	while(p!=NULL)
	{
	    if(p->pri==1)
		{
		h->option=p->option;
		h->name=p->name;
		h->pri=p->pri;
		cout<<p->option<<" "<<p->name<<endl;
		if(p->link!=NULL)
		{
			h->link=new node;
			h->link->option=p->link->option;
			h->link->pri=p->link->pri;
			h->link->name=p->link->name;
			h->link->link=NULL;
		    cout<<p->link->option<<" "<<p->link->name<<endl;
			head=h;
			return head;
		}
		}
		p=p->link;
	}
	p=head;
			h->link=new node;
			h->link->option=p->link->option;
			h->link->pri=p->link->pri;
			h->link->name=p->link->name;
			h->link->link=NULL;
	head=h;
	cout<<p->link->option<<" "<<p->link->name<<endl;
	return head;

}
int leng(node *head)
{
	int l=0;node * h=head;
	while(h!=NULL)
	{l++;
		h=h->link;
	}return l;
}
void audi(struct node *head)
{    srand (time(NULL));
	 int noOfWrong=leng(head); noOfWrong--;
  // cout<<no<<endl;
	 int corrperc=50+rand()%25+10;
     int perc=100-corrperc;
	 int wrong=0;
	struct node * p=head;
	while(p!=NULL)
	{     if(p->pri==1)
    	    {
			cout<<p->option<<" "<<p->name<<"\t";
			cout<<corrperc<<" % \n" ;
		    }
			else
			{  wrong++;
			  if(wrong<noOfWrong)
				{
				cout<<p->option<<" "<<p->name<<"\t";
			   int ans=rand() % perc + 1;
			   perc-=ans;
			   cout<<ans<<" % \n";
				}
				else
				{
					cout<<p->option<<" "<<p->name<<"\t";
					cout<<perc<<" %\n";

				}
			}
			p=p->link;

	}
}

void display(struct node *head)
{
	struct node * p=head;
	while(p!=NULL)
	{cout<<p->option<<" "<<p->name<<endl;
	p=p->link;
	}
}
void displaystack()
{
        vector<pair<int, string> >::iterator it;
        for(it=lines.begin();it!=lines.end();it++)
        {
            pair <int,string> pr;
            pr=(*it);
            cout<<pr.first<<"\t";
            cout<<pr.second;  cout<<endl;
		}
}
void takelifeline(int ch)
{
	    pair<int,string> to;
	    vector<pair<int, string> >::iterator it;
		while(!life.empty())
		{
			to=life.top();
			life.pop();
			if(to.first==ch)
				break;
			cpy.push(to);
		}

		while(!cpy.empty())
		{
			to=cpy.top();
			cpy.pop();
			life.push(to);
		}
		for(it=lines.begin();it!=lines.end();it++)
		{
			if((*it).first==ch)
				break;
		}
		lines.erase(it);
		displaystack();
}
int lifeline()
{

	there:int ch;
	scanf("%d",&ch);
	if(ch>=1&&ch<=3)
	{
		takelifeline(ch);
	return ch;
	}
	else
	{
		cout<<"wrong choice entered\n Press again\n";
		goto there;
	}
}
void activeLifeLine(int p)
{int r;
     char l,op;


  it:switch(p)
  {
   case 1:
    {//FIFTY FIFTY
    	 cntll[0]--;
         head=fifty(head);//0
         cout<<"Do u want to take another LifeLine.Press your lifeline no. Press your choice 1,2,3 if yes and n for no\n";
     		char o;cin>>o;
     		if(o=='n')
     		goto psit;
     		else if(o=='1'|| o=='2'|| o=='3')
     		{ p=o-'0';//int conversion
			 goto it;
			}
         if(cntll[0]>=0)
         {
         psit:
		 ps:printf("enter your answer");
         cin>>op;
         r=answer(head,op);
         if(r==1)
         {
		 	printf("correct!\n");
         }
		 else
         {
		     printf("wrong\n");
			 quit();
			 //QUIT
         }
		 break;
     	}
     	else
     	{
     		cout<<"Do u want to take another LifeLine.Press your lifeline no. Press your choice 1,2,3,4 if yes and n for no\n";
     		char o;cin>>o;
     		if(o=='n')
     		goto ps;
     		else if(o=='1'|| o=='2'|| o=='3')
     		{ p=o-'0';
			 goto it;
			}

		 }
		 break;
	}
  case 3://DOUBLE DIP
        {
		cntll[2]--;//0

		if(cntll[2]>=0)
         {
			 printf("enter your answer\n");
         	cin>>op;//scanf("%c",&op);
         	//cout<<head->option<<"\t"<<op<<endl;
         	if (answer(head,op)==0)
         	{printf("Wrong Answer,\t one more chance\t");
         	printf("Enter your answer, again\n");
         		scanf("%s",&op);
         		//display(head);
         		r=answer(head,op);
		 		if(r==1)
		 		printf("correct\n");
		 		else
		 		printf("incorrect\n");//QUIT
		 	}
				else
        	 printf("Correct\n");
        }
        else
        {   cout<<"Do u want to take another LifeLine.Press your lifeline no. Press your choice 1,2,3 if yes and n for no\n";
     		char o;cin>>o;
     		if(o=='n')
     		goto ps;
     		else if(o=='1'|| o=='2'|| o=='3')
     		{ p=o-'0';
			 goto it;
			}
		}
        break;
}

    case 2:{//AUDIENCE POLL
	      cntll[1]--;
	    if(cntll[1]>=0)
		{
		  audi(head);

     		cout<<"Do u want to take another LifeLine.Press your lifeline no. Press your choice 1,2,3 if yes and n for no\n";
     		char o;cin>>o;
     		if(o=='n')
     		goto laliga;
     		else if(o=='1'|| o=='2'|| o=='3')
     		{ p=o-'0';
			 goto it;
			}


          laliga:printf("enter your answer\n");

		 scanf("%s",&op);
         r=answer(head,op);
         if(r==1)
         printf("correct\n");
         else
         printf("wrong\n");//QUIT
     	}
     	else
     	{
     		cout<<"Do u want to take another LifeLine.Press your lifeline no. Press your choice 1,2,3,4 if yes and n for no\n";
     		char o;cin>>o;
     		if(o=='n')
     		goto ps;
     		else if(o=='1'|| o=='2'|| o=='3')
     		{ p=o-'0';
			 goto it;
			}


		 }
		 break;
		  }

	default :
	{
		cout<<" Wrong choice Entered \nPress again \t";
		cin>>p;
		goto it;
		break;
	}
 }
}
int main()
{
   	char l,op;
    int p,r;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    setbkcolor(0);
    Display x;
    x.start();

    life.push(make_pair(1,"50-50"));
    life.push(make_pair(2,"audience"));
    life.push(make_pair(3,"double dip"));
    lines.push_back(make_pair(1,"50-50"));
    lines.push_back(make_pair(2,"audience"));
    lines.push_back(make_pair(3,"double dip"));

    int totqleft=15;loop=0;
	ques=1;
	//QUESTIONS
	while(totqleft!=0)
	{  loop++;
        srand(time(NULL));
	    ques=rand()%totqleft+1;

	cout<<"Q- "<<loop<<" ";
	cout<<q[ques];
	//printf("Which is the longest day in year?\n");
  	struct node *w=new node;
  	struct node *x=new node;
  	struct node *y=new node;
  	struct node *z=new node;
  head=w;
  w->option='a';
  w->name=a[ques];//;
  w->pri=0;
  x->option='b';
  w->link=x;
  x->name=b[ques];//"24 june";
  x->pri=0;
  x->link=y;
  y->option='c';
  y->name=c[ques];//"31 may";
  y->pri=0;
  y->link=z;
  z->option='d';
  z->name=d[ques];//"5 december";
  z->pri=0;
  z->link=NULL;
  if(ans[ques] ==1){w->pri=1;}
  if(ans[ques] ==2){x->pri=1;}
  if(ans[ques] ==3){y->pri=1;}
  if(ans[ques] ==4){z->pri=1;}


 display(head);
 if(cntll[0]==0&&cntll[1]==0&&cntll[2]==0) goto there;
 printf("press y if u want life lines and n if you dont want and q to quit \n");
 cin>>l;
 if(l=='y')
 {
  printf("available life lines are\n");
  displaystack();
  p=lifeline();
  activeLifeLine(p);
 }
 else if(l=='q')
 {
     safequit();
     return 0;
 }
 else//No Life Lines taken
 {
     there:
 	printf("enter your answer?\n");
 	scanf("%s",&op);
 	r= answer(head,op);
    if(r==1)
   { //*/settextstyle(1,HORIZ_DIR,i);
    cout<<"correct";
    outtextxy(250,250,"correct");

   }

	else//make him quit
	{   cout<<"incorrect";
		outtextxy(200,200,"Incorrect");
		quit();
		break;
	}
 }
    int ind1=ques,ind2=totqleft;
    string temp=q[ind1];
    q[ind1]=q[ind2];q[ind2]=temp;
    temp=a[ind1];a[ind1]=a[ind2];
    a[ind2]=temp;
    temp=b[ind1];b[ind1]=b[ind2];
    b[ind2]=temp;
    temp=c[ind1];c[ind1]=c[ind2];
    c[ind2]=temp;
    temp=d[ind1];d[ind1]=d[ind2];
    d[ind2]=temp;
    int test=ans[ind1];
    ans[ind1]=ans[ind2];
    ans[ind2]=test;

    totqleft--;
    ques++;
}
return 0;


}

