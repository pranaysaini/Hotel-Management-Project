#include<iostream>
using namespace std;

int main(){
    
    int quant;
    int choice;
    
    // Quanity of items
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshakes = 0, Qchicken = 0; 
    
    // Food items Sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshakes = 0, Schicken = 0;
	
	// Total Price of Items
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shakes = 0, Total_chicken = 0;     
    
    // Price of each item
    int oneroom = 1200, op = 250, ob = 120, on = 140, os = 120, oc = 150; 
    
	cout<<"Qunatity of Items present in Hotel"<<endl;
	
    cout<<endl;
    
	cout<<"Rooms Available : ";
	cin>>Qrooms;
	
	
	cout<<"Quantity of Pasta : ";
	cin>>Qpasta;
	
	cout<<"Quantity of Burger : ";
	cin>>Qnoodles;
	
	cout<<"Quantity of Noodles : ";
	cin>>Qburger;
	
	cout<<"Quantity of Shake : ";
	cin>>Qshakes;
	
	cout<<"Quantity of Chicken-Roll : ";
	cin>>Qchicken;
	
	cout<<"\t"<<endl;
	
	cout<<"Please Select from given menu options "<<endl;
	
	cout<<endl;
	
	cout<<"1. Rooms"<<endl;
	cout<<"2. Pasta"<<endl;
	cout<<"3. Burger"<<endl;
	cout<<"4. Noodles"<<endl;
	cout<<"5. Shake"<<endl;
	cout<<"6. Chicken-Roll"<<endl;
	
	cout<<"7. Information of Sales and Collection : "<<endl;
	
	cout<<"8. Exit"<<endl;
	
	cout<<endl<<endl;
	
	cout<<"Please Enter your Choice : ";
	cin>>choice;
	
	cout<<endl<<endl;
	
	switch(choice){
		case 1:
		    cout<<"Enter number of Rooms : ";
		    cin>>quant;
		    
		    if(Qrooms-Srooms >= quant){
		    	Srooms = Srooms+quant;
		    	Total_rooms = Total_rooms + (quant * oneroom);
		    	
		    	cout<<quant<<" Room/Rooms has been alloted to you !"<<endl<<endl;
			}
			else{
				cout<<"Only "<<Qrooms-Srooms<<" rooms are remaining in hotel"<<endl<<endl;
				break;
			}
            
		
		case 2:
		    cout<<"Pasta Quantity : ";
		    cin>>quant;
		    
		    if(Qpasta-Spasta >= quant){
		    	Spasta = Spasta + quant;
		    	Total_pasta = Total_pasta + (quant * op);
		    	
		    	cout<<quant<<" Pasta is the Order "<<endl<<endl;
			}
			else{
				cout<<"Only "<<Qpasta-Spasta<<" Pasta remaining in hotel"<<endl<<endl;
				break;
			}
		    
		
		case 3:
		    cout<<"Enter number of burger : ";
		    cin>>quant;
		    
		    if(Qburger-Sburger >= quant){
		    	Sburger = Sburger+quant;
		    	Total_burger = Total_burger + (quant * ob);
		    	
		    	cout<<quant<<" Burger/Burgers has been alloted to you !"<<endl<<endl;
			}
			else{
				cout<<"Only "<<Qburger-Sburger<<" burgers are remaining in hotel"<<endl<<endl;
				break;
		    }
		    
		    
		case 4:
		    cout<<"Enter Noodles Quantity : ";
		    cin>>quant;
		    
		    if(Qnoodles-Snoodles >= quant){
		    	Snoodles = Snoodles + quant;
		    	Total_noodles = Total_noodles + (quant * on);
		    	
		    	cout<<quant<<" Noodles is the Order "<<endl<<endl;
			}
			else{
				cout<<"Only "<<Qnoodles-Snoodles<<" Noodles remaining in hotel"<<endl<<endl;
				break;
			}
			
						
		case 5:
		    cout<<"Enter Shakes Quantity : ";
		    cin>>quant;
		    
		    if(Qshakes-Sshakes >= quant){
		    	Sshakes = Sshakes + quant;
		    	Total_shakes = Total_shakes + (quant * os);
		    	
		    	cout<<quant<<"Shakes is the Order "<<endl<<endl;
			}
			else{
				cout<<"Only "<<Qshakes-Sshakes<<" Shakes remaining in hotel"<<endl<<endl;
				break;
			}
			
					
		case 6:
		    cout<<"Enter Chicken-Roll Quantity : ";
		    cin>>quant;
		    
		    if(Qchicken-Schicken >= quant){
		    	Schicken = Schicken + quant;
		    	Total_chicken = Total_chicken + (quant * oc);
		    	
		    	cout<<quant<<"Chicken-Roll/Rolls is the Order "<<endl<<endl<<endl<<endl;
			}
			else{
				cout<<"Only "<<Qchicken-Schicken<<" Chicken-Rools remaining in hotel"<<endl<<endl<<endl<<endl;
				break;
			}
		    
		
		case 7: 
		    cout<<"Details of sales and collection : "<<endl<<endl;
			
			cout<<"Number of Rooms we had : "<<Qrooms<<endl;
			cout<<"Number of rooms we gave for rent : "<<Srooms<<endl;
			cout<<"Remaining Rooms : "<<Qrooms-Srooms<<endl;
			cout<<"Rent of one Room : "<<oneroom<<endl;
			cout<<"Total Rooms collection for the day : Rs"<<Total_rooms<<endl;
			
			cout<<endl;
			
			cout<<"Number of Pasta we had : "<<Qpasta<<endl;
			cout<<"Number of Pasta we sold : "<<Spasta<<endl;
			cout<<"Remaining Pasta : "<<Qpasta-Spasta<<endl;
			cout<<"Price of one pasta : "<<op<<endl;
			cout<<"Total Pasta collection for the day : Rs"<<Total_pasta<<endl;
			
			cout<<endl;
			
			cout<<"Number of burger we had : "<<Qburger<<endl;
			cout<<"Number of burger we sold : "<<Sburger<<endl;
			cout<<"Remaining burger : "<<Qburger-Sburger<<endl;
			cout<<"Price of one burger : "<<ob<<endl;
			cout<<"Total burger collection for the day : Rs"<<Total_burger<<endl;
			
			cout<<endl;
			
			cout<<"Number of noodles we had : "<<Qnoodles<<endl;
			cout<<"Number of noodles we sold : "<<Snoodles<<endl;
			cout<<"Remaining noodles : "<<Qnoodles-Snoodles<<endl;
			cout<<"Price of one plate noodles : "<<on<<endl;
			cout<<"Total noodles collection for the day : Rs"<<Total_noodles<<endl;
			
			cout<<endl;
			
			cout<<"Number of shakes we had : "<<Qshakes<<endl;
			cout<<"Number of shakes we sold : "<<Sshakes<<endl;
			cout<<"Remaining shakes : "<<Qshakes-Sshakes<<endl;
			cout<<"Price of one shake : "<<os<<endl;
			cout<<"Total shakes collection for the day : Rs"<<Total_shakes<<endl;
			
			cout<<endl;
			
			cout<<"Number of Chhicken-Rolls we had : "<<Qchicken<<endl;
			cout<<"Number of Chicken-Rolls we sold : "<<Schicken<<endl;
			cout<<"Remaining Chicken-Rolls : "<<Qchicken-Schicken<<endl;
			cout<<"Price of one chicken roll : "<<oc<<endl;
			cout<<"Total Chicken-Rolls collection for the day : Rs"<<Total_chicken<<endl;
		
		    
		case 8:
		    exit(0);
		    
		default: 
		    cout<<"Please Select Numbers Mentioned above : "<<endl;		
			        			
	}
    	
	return 0;
}
