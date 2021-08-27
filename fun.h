#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

const int m = 1000;

class Toll_Plaza
{
   private:
                int buscount, allowed_truckcount, banned_truckcount, bykecount, carcount, pickupcount;

                int toll_bus[m];
                string Bus_name[m];
                string Bus_code[m];
                string Bus_type[m];

                string Truck_code[m];
                int toll_truck[m];
                int fine[m];

                string Banned_code[m];
                int allowed_wgt[m];
                int banned_wgt[m];


                string byke_model[m];
                string byke_name[m];
                int toll_byke[m];


                string Car_brand[m];
                string Car_model[m];
                int toll_car[m];

                string Pickup_name[m];
                string Pickup_model[m];
                int toll_pickup[m];

                int totalVehicle=0;

         public:

                void init();
                void enterBus();
                void enterTruck();
                void enterByke();
                void enterCar();
                void enterPicup();

                void display();
                void banned_vehicle();
                void totalamount();
                void totalvehicle();

                void print();
};
