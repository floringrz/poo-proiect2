//
//  main.cpp
//  poo2
//
//  Created by Garzon Najar Percy Florin on 5/14/18.
//  Copyright © 2018 Garzon Najar Percy Florin. All rights reserved.
//

#include<iostream>

#include<string>
using namespace std;
class expozitie
{
protected:
    char nume[100][100];
    long long  pret[200];
    long long cod[20],nr[20];
    long long  plus,sum;
    char vanzare[100][100];
    char listvanzare[100][100];
    
public:
    expozitie()
    {
        sum=0;
        temp=0;
        nrmasini=0;
        plus=0;
       
    }
   
    char catagory[20];
    int temp,nrmasini;
    void insert();
    void add();
    void display();
    void search();
    void remove();
    void total_amount();
    long long catago_amount();
    void error1();
    void initial_task();
    int function1();
    int sell();
    void list();
};
void expozitie::insert()
{
    int i,n;
    cout<<"marca masinii: ";
    cin>>catagory;
    cout<<"cate modele doriti sa inserati?";
    cout<<endl;
    cin>>n;
    for(i=temp;i<n;i++)
    {
        cout<<"introduceti modelul: ";
        cin>>nume[temp];
        cout<<"introduceti codul: ";
        cin>>cod[temp];
        cout<<"introduceti pretul: ";
        cin>>pret[temp];
        cout<<"introduceti numarul de masini din acest model: ";
        cin>>nr[temp];
      
        cout<<"este masina de vanzare in cadrul expozitiei?";
        cout<<endl;
        cin>>vanzare[temp];
        cout<<endl;
        cout<<endl;
        
        temp++;
        sum=sum+nr[i];
     
    }
}
void expozitie::add()
{
    int i,n;
    cout<<"introduceti marca masinii: ";
    cin>>catagory;
    cout<<"cate modele doriti sa inserati?";
    cout<<endl;
    cin>>n;
    for(i=temp;i<n;i++)
    {
        cout<<"introduceti modelul: ";
        cin>>nume[temp];
        cout<<"introduceti codul: ";
        cin>>cod[temp];
        cout<<"introduceti pretul: ";
        cin>>pret[temp];
        cout<<"introduceti numarul de masini din acest model: ";
        cin>>nr[temp];
        
        cout<<"este masina de vanzare in cadrul expozitiei?";
        cout<<endl;
        cin>>vanzare[temp];
        cout<<endl;
        cout<<endl;
        temp++;
        sum=sum+nr[i];
   
    }
}
void expozitie::display()
{
    int i,ok=0;
   
    cout<<"din marca "<<catagory<<" avem urmatoarele modele :"<<'\n'<<'\n';

    for(i=0;i<temp;i++)
    {
        if(nr[i]>0)
        {
           

        cout<<"modelul:"<<nume[i]<<endl;
        cout<<"codul:"<<cod[i]<<endl;
        cout<<"pretul:"<<pret[i]<<endl;
        cout<<"numarul de masini din modelul acesta: "<<nr[i]<<endl;
        cout<<"este masina de vanzare in cadrul expozitie?"<<endl;cout<<vanzare[i]<<endl;
           
            ok=1;
        }}
    if(ok==0)
        cout<<"ne pare rau, din aceasta marca ni s-au vandut toate modelele";
    cout<<'\n'<<'\n';
}
void expozitie::search()
{
    int i,m,gasit=0;
    cout<<"introduceti codul: ";
    cin>>m;
    for(i=0;i<temp;i++)
    {
        if(cod[i]==m && nr[i]>0)
        {
            cout<<"modelul:"<<nume[i]<<endl;
            cout<<"codul:"<<cod[i]<<endl;
            cout<<"pretul:"<<pret[i]<<endl;
            cout<<"numarul de masini din modelul acesta: "<<nr[i]<<endl;
            cout<<"este masina de vanzare in cadrul expozitie?"<<endl;cout<<vanzare[i]<<endl;
            gasit=1;
            break;
            
        }}
        if(gasit==0)
            cout<<"ati introdus un cod gresit sau nu mai evem modelul dorit!"<<'\n'<<'\n';
    
    cout<<'\n'<<'\n';
}
void expozitie::remove()
{
    int i,m,gasit=0;
    cout<<"introduceti codul:";
    cin>>m;
    for(i=0;i<temp;i++)
    {   if(strcmp(vanzare[i],"da")!=0 && strcmp(vanzare[i], "DA")!=0 && strcmp(vanzare[i], "Da")!=0)
    {cout<<"Masina nu e de vanzare";
        gasit=1;
        break;}
        if(cod[i]==m)
        {if(nr[i]!=0)
        { nr[i]--;
            strcpy(listvanzare[++plus], nume[i]);
           
            gasit=1;
            sum--;
            cout<<"Ati cumparat masina";
            cout<<endl;
            break;}
        }}
        if(gasit==0)
            cout<<"ati introdus un cod gresit"<<'\n'<<'\n';
    
    cout<<'\n'<<'\n';
}
void expozitie::total_amount()
{
    cout<<"in expozitie avem masini in valoare de:"<<sum<<'\n'<<'\n';
}
long long expozitie :: catago_amount()
{
    return sum;
}
void expozitie::error1()
{
    cout<<"prima data trebuie sa introduceti o masina";
    cout<<'\n'<<'\n';
}
void expozitie::list(){
    int j;
    if(plus==0)
    { cout<<"Nu s-a vandut vreo masina din aceasta marca";
        }
    if(plus>0)
    {
    cout<<"din marca aceasta s-au vandut urmatoarele modele:";
    for(j=1;j<=plus;j++)
    {if(plus>=1)
    cout<<listvanzare[j]<<" ";
    
    }}}

void expozitie::initial_task()
{
    cout<<endl;
    cout<<endl;
  
    cout<<"Ce instructiune doriti sa selectati ?"<<'\n';
    cout<<"0. Daca doriti sa iesiti din categorie"<<'\n';
    cout<<"1.Daca doriti sa inserati(o singura data)"<<'\n';
    cout<<"2.Daca doriti sa adaugati"<<'\n';
    cout<<"3.Daca doriti sa afisati"<<'\n';
    cout<<"4.Daca doriti sa cautati "<<'\n';
    cout<<"5.Daca doriti sa cumparati o masina"<<'\n';
    cout<<"6.Daca doriti sa vedeti cate masini sunt in expozitie si cate masini s-au vandut"<<'\n';
  
}
int expozitie::function1()
{
    int a1;
    cout<<"Alegeti clasa masinii:"<<'\n';
    cout<<"0.pentru iesire"<<'\n'<<"1.coupe"<<'\n'
    <<"2.coupe cu 4 usi"<<'\n'<<"3.hot-hatch "<<'\n'<<"4.cabrio"<<'\n'<<"5.supersport"<<'\n';
    cin>>a1;
    return a1;
}
class coupe:public expozitie
{
private:
    char cp[15];
public:
    coupe operator+(coupe);
};
coupe coupe::operator+(coupe c)
{
    coupe ob1;
    ob1.sum=sum+c.sum;
    return (ob1);
}

class coupe4:public expozitie
{
private:
    char c4[15];
public:
    coupe4 operator+(coupe4);
    
};
coupe4 coupe4::operator+(coupe4 c)
{
    coupe4 ob2;
    ob2.sum=sum+c.sum;
    return (ob2);
}

class hothatch :public expozitie
{
private:
    
    char hh[14];
public:
    hothatch operator+(hothatch c);
   
};
hothatch hothatch::operator+(hothatch c)
{
    hothatch ob3;
    ob3.sum=sum+c.sum;
    return (ob3);
}
class cabrio:public expozitie
{
private:
    char cb[15];
public:
    cabrio operator+(cabrio);
};
cabrio cabrio::operator+(cabrio c)
{
    cabrio ob4;
    ob4.sum=sum+c.sum;
    return (ob4);
}
class supersport:public expozitie
{
private:
    char sport[15];
    
public:
    supersport operator+(supersport);
};
supersport supersport::operator+(supersport c)
{
    supersport ob5;
    ob5.sum=sum+c.sum;
    return (ob5);
}
int main()
{
    coupe cp[20],ob;
    coupe4 c4[20],ob1;
    hothatch hh[20],ob2;
    cabrio cb[20],ob3;
    supersport sport[20],ob4;
    int i,x=0,n,a,j,s,b = 0,c,a1,y=0,z=0;
    char inp[20];
    cout<<"-------Expozitie de masini ------- POO ~ PROIECTUL 2"<<endl;
    for(i=0;;i++)
    {
        a1=ob.function1();
        switch(a1)
        {
            case 1:                                         //coupe
                for(i=0;;i++)
                {
                    ob.initial_task();
                    cin>>a;
                    switch(a)
                    {
                        case 1:
                            if(x>0)
                            {
                                cout<<"poti insera o singura data"<<'\n'<<'\n';
                                break;
                            }
                            else
                            {
                                cout<<"cate marci de masina vreti sa introduceti?";
                                cout<<endl;
                                cin>>n;
                                for(i=0;i<n;i++)
                                {
                                    cp[x].insert();
                                    
                                    x++;
                                }
                            }
                            break;
                        case 2:
                            if(x<=0)
                            {ob.error1();
                                break;}
                            else
                            {
                                cout<<"cate marci de masina vreti sa introduceti?";
                                cin>>n;
                                for(j=0;j<n;j++)
                                {
                                    cp[x].add();
                                  
                                    x++;
                                }
                                break;
                            }
                        case 3:
                            if(x<=0)
                            {ob.error1();
                                break;}
                            else
                            {
                                for(s=0;s<x;s++)
                                {
                                    cp[s].display();
                                  
                                }
                                break;
                            }
                        case 4:
                            if(x<=0)
                            {ob.error1();
                                break;}
                            if(x>0)
                            {
                                cout<<"introduceti marca: ";
                                cin>>inp;
                                for(c=0;c<x;c++)
                                {
                                    b=strcmp(inp,cp[c].catagory);
                                    if(b==0)
                                        break;
                                }
                                if(b==0)
                                {cp[c].search();
                                    }
                                break;
                            }
                        case 5:
                            if(x<=0)
                            {ob.error1();
                                break;}
                            else
                            {
                                cout<<"introduceti marca: ";
                                cin>>inp;
                                for(c=0;c<x;c++)
                                {
                                    b=strcmp(cp[c].catagory,inp);
                                    if(b==0)
                                        break;
                                }
                                if(b==0)
                                    cp[c].remove();
                                break;
                            }
                        case 6:
                            if(x<=0)
                            {ob.error1();
                                break;}
                            else
                            {long long  w=0;
                            
                                for(i=0;i<x;i++)
                                {w=cp[i].catago_amount()+w;
                                    cout<<"din marca "<<cp[i].catagory<<" avem "<<cp[i].catago_amount()<<" masini"<<endl;
                                 
                                       cp[i].list();
                                    cout<<endl;
                                }
                              cout<<"in expozitie avem un numar total de "<<w<<" masini"<<endl;
                                break;
                            }
                    }
                    if(a==0)
                        break;
                }
                break;
            case 2:                             //coupe 4 usi
                for(i=0;;i++)
                {
                    ob1.initial_task();
                    cin>>a;
                    switch(a)
                    {
                        case 1:
                            if(y>0)
                            {
                                cout<<"puteti insera o singura data"<<'\n'<<'\n';
                                break;
                            }
                            else
                            {
                                cout<<"cate marci de masina vreti sa introduceti?";
                                cout<<endl;
                                cin>>n;
                                for(i=0;i<n;i++)
                                {
                                    c4[y].insert();
                                   
                                    y++;
                                }
                            }
                            break;
                        case 2:
                            if(y<=0)
                            {ob1.error1();
                                break;}
                            else
                            {
                                cout<<"cate marci de masina vreti sa introduceti?";
                                cout<<endl;
                                cin>>n;
                                for(j=0;j<n;j++)
                                {
                                    c4[y].add();
                                 
                                    y++;
                                }
                                break;
                            }
                        case 3:
                            if(y<=0)
                            {ob1.error1();
                                break;}
                            else
                            {
                                for(s=0;s<y;s++)
                                {
                                    c4[s].display();
                                  
                                }
                                break;
                            }
                        case 4:
                            if(y<=0)
                            {ob1.error1();
                                break;}
                            if(y>0)
                            {
                                cout<<"introduceti marca: ";
                                cin>>inp;
                                for(c=0;c<y;c++)
                                {
                                    b=strcmp(inp,c4[c].catagory);
                                    if(b==0)
                                        break;
                                }
                                if(b==0)
                                { c4[c].search();
                                    }
                                break;
                            }
                        case 5:
                            if(y<=0)
                            {ob1.error1();
                                break;}
                            else
                            {
                                cout<<"introduceti marca:";
                                cin>>inp;
                                for(c=0;c<y;c++)
                                {
                                    b=strcmp(c4[c].catagory,inp);
                                    if(b==0)
                                        break;
                                }
                                if(b==0)
                                    c4[c].remove();
                                break;
                            }
                        case 6:
                            if(y<=0)
                            {ob1.error1();
                                break;}
                            else
                            {
                                long long w=0;
                                
                                for(i=0;i<y;i++)
                                {w=c4[i].catago_amount()+w;
                                    cout<<"din marca "<<c4[i].catagory<<" avem "<<c4[i].catago_amount()<<" masini"<<endl;
                                    
                                    c4[i].list();
                                    cout<<endl;
                                }
                                cout<<"in expozitie avem un numar total de "<<w<<" masini"<<endl;
                                break;
                            }
                    }
                    if(a==0)
                        break;
                }
                break;
            case 3:                     //hh
                for(i=0;;i++)
                {
                    ob2.initial_task();
                    cin>>a;
                    switch(a)
                    {
                        case 1:
                            if(z>0)
                            {
                                cout<<"puteti insera o singura data: "<<'\n'<<'\n';
                                break;
                            }
                            else
                            {
                                cout<<"cate marci de masina vreti sa introduceti?";
                                cout<<endl;
                                cin>>n;
                                for(i=0;i<n;i++)
                                {
                                    hh[z].insert();
                                  
                                    z++;
                                }
                            }
                            break;
                        case 2:
                            if(z<=0)
                            {ob2.error1();
                                break;}
                            else
                            {
                                cout<<"cate marci de masina vreti sa introduceti?";
                                cout<<endl;
                                cin>>n;
                                for(j=0;j<n;j++)
                                {
                                    hh[z].add();
                                    
                                    z++;
                                }
                                break;
                            }
                        case 3:
                            if(z<=0)
                            {ob2.error1();
                                break;}
                            else
                            {
                                for(s=0;s<z;s++)
                                {
                                    hh[s].display();
                                 
                                }
                                break;
                            }
                        case 4:
                            if(z<=0)
                            {ob2.error1();
                                break;}
                            if(z>0)
                            {
                                cout<<"introduceti marca: ";
                                cin>>inp;
                                for(c=0;c<z;c++)
                                {
                                    b=strcmp(inp,hh[c].catagory);
                                    if(b==0)
                                        break;
                                }
                                if(b==0)
                                {hh[c].search();
                                    }
                                break;
                            }
                        case 5:
                            if(z<=0)
                            {ob2.error1();
                                break;}
                            else
                            {
                                cout<<"introduceti marca: ";
                                cin>>inp;
                                for(c=0;c<z;c++)
                                {
                                    b=strcmp(hh[c].catagory,inp);
                                    if(b==0)
                                        break;
                                }
                                if(b==0)
                                    hh[c].remove();
                                break;
                            }
                        case 6:
                            if(z<=0)
                            {ob2.error1();
                                break;}
                            else
                            {long long  w=0;
                                
                                for(i=0;i<z;i++)
                                {w=cp[i].catago_amount()+w;
                                    cout<<"din marca "<<hh[i].catagory<<" avem "<<hh[i].catago_amount()<<" masini"<<endl;
                                    hh[i].list();
                                    cout<<endl;
                                }
                                cout<<"in expozitie avem un numar total de "<<w<<" masini"<<endl;
                                break;
                            }
                    }
                    if(a==0)
                        break;
                }
                break;
        
    case 4:                             //cabrio
        for(i=0;;i++)
        {
            ob3.initial_task();
            cin>>a;
            switch(a)
            {
                case 1:
                    if(x>0)
                    {
                        cout<<"poti insera o singura data"<<'\n'<<'\n';
                        break;
                    }
                    else
                    {
                        cout<<"cate marci de masina vreti sa introduceti?";
                        cout<<endl;
                        cin>>n;
                        for(i=0;i<n;i++)
                        {
                            cb[x].insert();
                            
                            x++;
                        }
                    }
                    break;
                case 2:
                    if(x<=0)
                    {ob3.error1();
                        break;}
                    else
                    {
                        cout<<"cate marci de masina vreti sa introduceti?";
                        cin>>n;
                        for(j=0;j<n;j++)
                        {
                            cb[x].add();
                            
                            x++;
                        }
                        break;
                    }
                case 3:
                    if(x<=0)
                    {ob3.error1();
                        break;}
                    else
                    {
                        for(s=0;s<x;s++)
                        {
                            cb[s].display();
                            
                        }
                        break;
                    }
                case 4:
                    if(x<=0)
                    {ob3.error1();
                        break;}
                    if(x>0)
                    {
                        cout<<"introduceti marca: ";
                        cin>>inp;
                        for(c=0;c<x;c++)
                        {
                            b=strcmp(inp,cb[c].catagory);
                            if(b==0)
                                break;
                        }
                        if(b==0)
                        {cb[c].search();
                        }
                        break;
                    }
                case 5:
                    if(x<=0)
                    {ob3.error1();
                        break;}
                    else
                    {
                        cout<<"introduceti marca: ";
                        cin>>inp;
                        for(c=0;c<x;c++)
                        {
                            b=strcmp(cb[c].catagory,inp);
                            if(b==0)
                                break;
                        }
                        if(b==0)
                            cb[c].remove();
                        break;
                    }
                case 6:
                    if(x<=0)
                    {ob3.error1();
                        break;}
                    else
                    {
                        long long  w=0;
                        
                        for(i=0;i<x;i++)
                        {w=cb[i].catago_amount()+w;
                            cout<<"din marca "<<cb[i].catagory<<" avem "<<cb[i].catago_amount()<<" masini"<<endl;
                            
                            cb[i].list();
                            cout<<endl;
                        }
                        cout<<"in expozitie avem un numar total de "<<w<<" masini"<<endl;
                        break;
                    }
            }
            if(a==0)
                break;
        }
            break;
                
            case 5:                 //supersport
                for(i=0;;i++)
                {
                    ob4.initial_task();
                    cin>>a;
                    switch(a)
                    {
                        case 1:
                            if(x>0)
                            {
                                cout<<"poti insera o singura data"<<'\n'<<'\n';
                                break;
                            }
                            else
                            {
                                cout<<"cate marci de masina vreti sa introduceti?";
                                cout<<endl;
                                cin>>n;
                                for(i=0;i<n;i++)
                                {
                                    sport[x].insert();
                                    
                                    x++;
                                }
                            }
                            break;
                        case 2:
                            if(x<=0)
                            {ob4.error1();
                                break;}
                            else
                            {
                                cout<<"cate marci de masina vreti sa introduceti?";
                                cin>>n;
                                for(j=0;j<n;j++)
                                {
                                    sport[x].add();
                                    
                                    x++;
                                }
                                break;
                            }
                        case 3:
                            if(x<=0)
                            {ob4.error1();
                                break;}
                            else
                            {
                                for(s=0;s<x;s++)
                                {
                                    sport[s].display();
                                    
                                }
                                break;
                            }
                        case 4:
                            if(x<=0)
                            {ob4.error1();
                                break;}
                            if(x>0)
                            {
                                cout<<"introduceti marca: ";
                                cin>>inp;
                                for(c=0;c<x;c++)
                                {
                                    b=strcmp(inp,sport[c].catagory);
                                    if(b==0)
                                        break;
                                }
                                if(b==0)
                                {sport[c].search();
                                }
                                break;
                            }
                        case 5:
                            if(x<=0)
                            {ob4.error1();
                                break;}
                            else
                            {
                                cout<<"introduceti marca: ";
                                cin>>inp;
                                for(c=0;c<x;c++)
                                {
                                    b=strcmp(sport[c].catagory,inp);
                                    if(b==0)
                                        break;
                                }
                                if(b==0)
                                    sport[c].remove();
                                break;
                            }
                        case 6:
                            if(x<=0)
                            {ob4.error1();
                                break;}
                            else
                            {long long  w=0;
                                
                                for(i=0;i<x;i++)
                                {w=sport[i].catago_amount()+w;
                                    cout<<"din marca "<<sport[i].catagory<<" avem "<<sport[i].catago_amount()<<" masini"<<endl;
                                    
                                    sport[i].list();
                                    cout<<endl;
                                }
                                cout<<"in expozitie avem un numar total de "<<w<<" masini"<<endl;
                                break;
                            }
                    }
                    if(a==0)
                        break;
                }
                break;
                
                
        }
        
        if(a1==0)
            break;
    }
    return 0;
    }

