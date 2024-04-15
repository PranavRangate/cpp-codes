#include<iostream>
using namespace std;

class Father{
public:
    int f_p , t_f_p , pf;
    void get_Datafather(){
        cout<<"Enter the total  Father's Property : "<<endl;
        cin>>t_f_p;
        
    }
    void DisplayFather(){
        cout<<"The Total Father's property is :" <<t_f_p<<endl;
    }
    void passmypropertyf(){
        char choice;
        cout << "Do you want to pass the property to son ? (y/n): ";
        cin >> choice;
        if(choice == 'y' || choice == 'Y')
            pf = t_f_p;
        else
            pf = 0;
    }

};

class Son : public Father{
public: 
    int s_p , t_s_p , ps ;
    void get_Datason(){
        cout<<"Enter the Son's Property : "<<endl;
        cin>>s_p;
        t_s_p = s_p + pf;
    }
    void DisplaySon(){
        cout<<"The Total Son's property is :" <<t_s_p <<endl;
    }
    void passmypropertys(){
        char choice;
        cout << "Do you want to pass the property to Grandson ? (y/n): ";
        cin >> choice;
        if(choice == 'y' || choice == 'Y')
            ps = t_s_p;
        else
            ps = 0;
    }
};

class Grandson : public Son {
public: 
    int g_p,t_g_p;
    void get_Datagrandson(){
        cout<<"Enter the Grandson Property : "<<endl;
        cin>>g_p;
        t_g_p = g_p + ps;
    }
    void DisplayGrandson(){
        cout<<"The Total Grandson's property is :" <<t_g_p<<endl;
    }
};

int main(){
    Grandson g;
    g.get_Datafather();
    g.passmypropertyf();
    g.get_Datason();
    g.passmypropertys();
    g.get_Datagrandson();
    
    
    g.DisplayFather();
    g.DisplaySon();
    g.DisplayGrandson();
    
    return 0;
}