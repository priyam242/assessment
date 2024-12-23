#include <iostream>
using namespace std;
class Menu
{
public:
    void set()
    {
        cout<<"\t------Tops Tech. Fast Food------";
        string name;
        cout<<"\nEnter your name = ";
        cin>>name;

        int choice,c = 0, q = 0;
        int total = 0;

        cout<<"\nWhat would you like to order?\n";
        cout<<"-------Menu-------";
        cout<<"\n 1). Pizzas";
        cout<<"\n 2). Burgers";
        cout<<"\n 3). Sandwich";
        cout<<"\n 4). Rolls";
        cout<<"\n 5). Biryani";
        cout<<"\nEnter your choice = ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"\n 1.Pizza Margarita RS.240";
            cout<<"\n 2.Pizza PEPERONI RS.160";
            cout<<"\n 3.Pizza Mexican RS.100";
            cout<<"\nPlease enter which pizza you would like to have? = ";
            cin>>c;
            break;
        case 2:
            cout<<"\n 1.Beef Burger RS.240";
            cout<<"\n 2.Cheese Burger RS.160";
            cout<<"\n 3.Creamy Mushroom Burger RS.100";
            cout<<"\nPlease enter which burger you would like to have? = ";
            cin>>c;
            break;
        case 3:
            cout<<"\n 1.Club Sandwich RS.240";
            cout<<"\n 2.Veg. Crispy Sandwich RS.160";
            cout<<"\n 3.Extreme Veg. Sandwich RS.100";
            cout<<"\nPlease enter which sandwich you would like to have? = ";
            cin>>c;
            break;
        case 4:
            cout<<"\n 1.PANEER MASALA Roll RS.240";
            cout<<"\n 2.SOYA CHAAP MASALA Roll RS.160";
            cout<<"\n 3.CHEESE MASALA Roll RS.100";
            cout<<"\nPlease enter which roll you would like to have? = ";
            cin>>c;
            break;
        case 5:
            cout<<"\n 1.Veg. Biryani RS.240";
            cout<<"\n 2.Egg Biryani RS.160";
            cout<<"\n 3.Chicken Biryani RS.100";
            cout<<"\nPlease enter which biryani you would like to have? = ";
            cin>>c;
            break;
        default:
            {
            cout<<"\nYou have chosen an invalid menu option.";
            }
        }
        if(c>=1 && c<=3)
        {
            cout<<"\nPlease enter quantity = ";
            cin>>q;
            switch (c)
            {
            case 1:
                {
                  total = 240 * q;
                }
                break;
            case 2:
                {
                 total = 160 * q;
                }
                 break;
            case 3:
                {
                  total = 100 * q;
                }

                break;
            }
        }
        else
        {
            cout<<"\nYou have chosen an invalid item number.";
        }

        cout<<"\n\t----Your order-----";
        cout<<"\nYour Name = "<<name;
        cout<<"\nYour Total bill is = "<<total;
        cout<<"\nYour order will be delivered in 40 minutes.";
        cout<<"\nThank you for ordering from Tops Tech Fast Food.";
        cout<<"\nWould you like to order anything else? Y / N :"<<endl;
    }
};

int main()
{
    Menu m1;
    m1.set();
}
