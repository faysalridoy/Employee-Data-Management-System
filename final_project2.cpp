#include<stdio.h>
#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

main()
{   cout<<"                          "<<"WELCOME TO EAST WEST UNIVERSITY EMPLOYEE DATABASE MANAGEMENT SYSTEM"<<endl<<endl<<endl;
    cout<<"EMPLOYEE INITIAL NAME WITH ID :"<<endl<<endl<<endl;
    cout<<"             SWK:7160101 "<<"          MHA:7160102"<<"            NYA:7160103"<<"            SR:7160104"<<endl;
    cout<<"             SMA:7160105 "<<"          MI:7160106"<<"             TJ:7160107"<<"             MRH:7160108"<<endl;
    cout<<"             SA:7160109 "<<"           SS:7160110"<<"             AH:6001001"<<"             KA:6001002"<<endl;
    cout<<"             MMAH:6001003 "<<"         MMI:6001004"<<"            HG:6001005"<<"             SRA:6001006"<<endl;
    cout<<"             FMA:6001007 "<<"          MBS:6001008"<<"            NIA:6001009"<<"            KMR:6001010"<<endl;
    cout<<"             AAli:2101101 "<<"         AP:2101102"<<"             GM:2101103"<<"             AH:2101104"<<endl;
    cout<<"             MH:2101105 "<<"           MMH:2101106"<<"            RA:2101107"<<"             NAJ:2101108"<<endl;
    cout<<"             SJ:2101109 "<<"           SRJ:2101110"<<endl;

    int counnt=1;
    again:
    char id[7],fid[7],string[100],p;
    int r,x,a,y=1;
    ifstream idf;
    idf.open("employe.txt");
     for(a=0;a<30;a++)
     {
    cout<<"Enter employee id: ";
    cin>>id;
    while(!idf.eof())
    {
        r=0;
        idf>>fid;
        for(x=1;x<7;x++)
        {
            if(id[x]!=fid[x])
            {
                r=1;
                break;
            }

        }
        if(r==0)
        {
            break;
        }
    }

    if(r==0)
    {

        strcat(fid,".txt");
        ifstream in;
        in.open(fid);
        cout<<endl<<endl<<endl;

        while(!in.eof())
    {
    in.getline(string,100);
    cout<<string<<endl;
    }
    cout<<endl<<endl<<endl;
    }
    else
    {
    cout<<endl<<endl<<"You have entered wrong Id"<<endl<<endl<<endl;


              if (counnt==3)
              {
                 exit(3);
              }

              counnt++;
    }

    also:
    cout<<"Do you want to see another employee data ?"<<endl<<"1.YES"<<endl<<"2.NO"<<endl<<"Press : ";
    cin>>p;
    cout<<endl<<endl<<endl;

    if(p=='1')
    {
        goto again;
        }
    else if (p=='2'){
        break;
}
        else
          {
              cout<<"You have entered wrong keyword"<<endl<<endl<<endl;
            if(y==3)
              {
                  break;
              }
              y++;
              goto also;
          }
        }


        cout<<"                                            Thank You" ;

 getch();

}

