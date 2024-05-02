#include<iostream>
#include<string.h>

using namespace std;


class Product{
    int	Prod_id;
    string Prod_name;
    int Stock;
    int Gst;
    int Discount;
    int Productprice;
    int Quantity;
    float selling_price;
    float gst_price;
    float discount_price;
    
    public:
    	
    Product(){
    	
    	Prod_id=0;
    	Prod_name="none";
    	Stock=0;
    	Gst=0;
    	Discount=0;
    	Productprice=0;
    	Quantity=0;
    	
	}
	
	Product(int p_i,string p_n,int stk,int gt,int dis,int pro_p,int qnt){
    	
    	Prod_id=p_i;
    	Prod_name=p_n;
    	Stock=stk;
    	Gst=gt;
    	Discount=dis;
    	Productprice=pro_p;
    	Quantity=qnt;
    	
	}
	
	void set_Data(){
		cout<<"Enter the product id:";
		cin>>Prod_id;
		cout<<"Enter the product name:";
		cin>>Prod_name;
		cout<<"Enter the Stock:";
		cin>>Stock;
		cout<<"Enter the Gst in persentage:";cin>>Gst;
		cout<<"Enter the Discount in persentage:";cin>>Discount;
		cout<<"Enter the Productprice:";
		cin>>Productprice;
		cout<<"Enter the Quantity:";
		cin>>Quantity;
	
	}
	
	void Calculategst(){
		
		gst_price=Productprice*Gst/100;
		
	}
	void calculatediscount(){
		
		discount_price=(Productprice+gst_price)*Discount/100;
		
	}
	void calculateprice(){
		
		selling_price=Productprice+gst_price-discount_price;
	}
	
	
	void viewProduct(){
		
		cout<<endl<<endl<<"Product id:"<<Prod_id<<endl;
		cout<<"Product name:"<<Prod_name<<endl;
		cout<<"Product Quantity:"<<Quantity<<endl;
		cout<<"Product price:"<<selling_price<<endl;
		
		
	}
	
	void CheckStock(){
		
		int newstock=Stock-Quantity;
		cout<<endl<<endl<<"Stock remaining of product "<<Prod_name<<" is "<<newstock;
		
	}
};

int main(){
	
	Product p(2222,"soap",100,18,5,153,66);
//	p.set_Data();
	p.Calculategst();
	p.calculatediscount();
	p.calculateprice();
	p.viewProduct();
	p.CheckStock();
	
}
