#include <iostream>
using namespace std;
int main()
{

    int quant;
    int choice;

    // representing Quantity
    int q_rooms, q_chicken_tikka, q_shakes, q_pizza, q_burger, q_pasta;
    // representing Sold item
    int s_rooms, s_chicken_tikka, s_shakes, s_pizza, s_burger, s_pasta;
    // representing total collection
    int total_rooms, total_chicken_tikka, total_shakes, total_pizza, total_burger, total_pasta;

    // quantity inputing
    cout << "Enter the quantity of rooms available: " ;
    cin >> q_rooms;
    cout << "Enter the quantity of chicken tikka available: " ;
    cin >> q_chicken_tikka;
    cout << "Enter the quantity of shakes available: " ;
    cin >> q_shakes;
    cout << "Enter the quantity of pizza available: " ;
    cin >> q_pizza;
    cout << "Enter the quantity of burger available: " ;
    cin >> q_burger;
    cout << "Enter the quantity of pasta available: " ;
    cin >> q_pasta ;

    // menu
    m:
    cout << "\n\t\t\t Please select from the menu options ";
    cout<<"\n\t\t_________________________________________________"<<endl;
    cout << "\n1) Rooms";
    cout << "\n2) Chicken tikka";
    cout << "\n3) shake";
    cout << "\n4) Pizza";
    cout << "\n5) Burger";
    cout << "\n6) Pasta";
    cout << "\n7) Information regarding sales and collection ";
    cout << "\n8) Exit" << endl;

    cout << "Enter the choice from above menu!!!" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want: ";
        cin >> quant;

        if (q_rooms - s_rooms >= quant)
        {
            s_rooms = s_rooms + quant;
            total_rooms = total_rooms + quant * 1200;
            cout << "\n\n"
                 << quant << " room / rooms have been alloted to you!" << endl;
            cout << total_rooms << "\tis your total billing amount";
        }
        else
            cout << "\n\tOnly" << q_rooms - s_rooms << "Rooms remaining in hotel ";
        break;

    case 2:
        cout << "\n\n Enter the quantity of Chicken tikka you want: ";
        cin >> quant;

        if (q_chicken_tikka - s_chicken_tikka >= quant)
        {
            s_chicken_tikka = s_chicken_tikka + quant;
            total_chicken_tikka = total_chicken_tikka + quant * 300;
            cout << "\n\n"
                 << quant << "your order has been placed!" << endl;
            cout << total_chicken_tikka << "\tis your total billing amount";
        }
        else
            cout << "\n\tOnly" << q_chicken_tikka - s_chicken_tikka << "Rooms remaining in hotel ";
        break;

    case 3:
        cout << "\n\n Enter the quantity of Shake you want: ";
        cin >> quant;

        if (q_shakes - s_shakes >= quant)
        {
            s_shakes = s_shakes + quant;
            total_shakes = total_shakes + quant * 150;
            cout << "\n\n"
                 << quant << "your order has been placed!" << endl;
            cout << total_shakes << "\tis your total billing amount";
        }
        else
            cout << "\n\tOnly" << q_shakes - s_shakes << "Rooms remaining in hotel ";
        break;

    case 4:
        cout << "\n\n Enter the quantity of Pizza you want: ";
        cin >> quant;

        if (q_pizza - s_pizza >= quant)
        {
            s_pizza = s_pizza + quant;
            total_pizza = total_pizza + quant * 200;
            cout << "\n\n"<< quant << "your order has been placed!" << endl;
            cout << total_pizza << "\tis your total billing amount";
        }
        else
            cout << "\n\tOnly" << q_pizza - s_pizza << "Rooms remaining in hotel ";
        break;

    case 5:
        cout << "\n\n Enter the quantity of Burger you want: ";
        cin >> quant;

        if (q_burger - s_burger >= quant)
        {
            s_burger = s_burger + quant;
            total_burger = total_burger + quant * 100;
            cout << "\n\n"<< quant << "your order has been placed!" << endl;
            cout << total_burger << "\tis your total billing amount";
        }
        else
            cout << "\n\tOnly" << q_burger - s_burger << "Rooms remaining in hotel ";
        break;

    case 6:
        cout << "\n\n Enter the quantity of Pasta you want: ";
        cin >> quant;

        if (q_pasta - s_pasta >= quant)
        {
            s_pasta = s_pasta + quant;
            total_pasta = total_pasta + quant * 200;
            cout << "\n\n"<< quant << " your order has been placed!" << endl;
            cout << total_pasta << "\tis your total billing amount";
        }
        else
            cout << "\n\tOnly" << q_pasta - s_pasta << "Rooms remaining in hotel ";
        break;

    case 7:
        cout <<"\n\t\tDetails of sales and collection ";
        cout<<"\n\t\t____________________________________"<<endl;
        cout << "\n\n Total number of rooms available:" << q_rooms;
        cout << "\n\n Number of rooms booked today " << s_rooms;
        cout << "\n\n Total  remaining rooms:" << q_rooms - s_rooms;
        cout << "\n\n Total collection of the day:" << total_rooms<<endl;

        cout << "\n\t\tDetails of sales and collection ";
        cout << "\n\n Total quantity of chicken tikka:" << q_chicken_tikka;
        cout << "\n\n Total quantity of chicken tikka ordered today " << s_chicken_tikka;
        cout << "\n\n Total  remaining chicken tikka:" << q_chicken_tikka - s_chicken_tikka;
        cout << "\n\n Total collection of the day:" << total_chicken_tikka<<endl;

        cout << "\n\t\tDetails of sales and collection ";
        cout << "\n\n Total quantity of shakes" << q_shakes;
        cout << "\n\n Total quantity of shakes ordered today " << s_shakes;
        cout << "\n\n Total  remaining shakes:" << q_shakes - s_shakes;
        cout << "\n\n Total collection of the day:" << total_shakes<<endl;

        cout << "\n\t\tDetails of sales and collection ";
        cout << "\n\n Total quantity of pizza" << q_pizza;
        cout << "\n\n Total quantity of pizza ordered today " << s_pizza;
        cout << "\n\n Total  remaining pizza:" << q_pizza - s_pizza;
        cout << "\n\n Total collection of the day:" << total_pizza<<endl;
        
        cout << "\n\t\tDetails of sales and collection ";
        cout << "\n\n Total quantity of pasta" << q_pasta;
        cout << "\n\n Total quantity of pasta ordered today " << s_pasta;
        cout << "\n\n Total  remaining pasta:" << q_pasta - s_pasta;
        cout << "\n\n Total collection of the day:" << total_pasta<<endl;

        cout << "\n\t\tDetails of sales and collection ";
        cout << "\n\n Total quantity of burger" << q_burger;
        cout << "\n\n Total quantity of burger ordered today " << s_burger;
        cout << "\n\n Total  remaining burgur:" << q_burger - s_burger;
        cout << "\n\n Total collection of the day:" << total_burger<<endl;

        cout<<"\n\t\t_______________________________________________________________________________"<<endl;

        cout<<"\n\t\t\t\t TODAYS TOTAL MONEY COLLECTION IS: "<<"RS."<< total_rooms+total_chicken_tikka+total_shakes+total_burger+total_pizza+total_pasta;

    case 8:
        exit(0);
        break;

    default:
        cout << "The option or value you have selected is invalid !!! try agian";


    }
    goto m;

    return 0;
};
