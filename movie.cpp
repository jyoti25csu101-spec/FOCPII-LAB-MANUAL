#include<iostream>
#include<string>
using namespace std;

class MovieTicket{
private:
    string movieName;
    int seatNumber;
    float ticketPrice;
    bool isBooked;

public:
    MovieTicket();
    MovieTicket(string movieName, int seatNumber, float ticketPrice);

    void bookTicket();
    void cancelTicket();
    void displayTicketDetails();
    double calculateTotalCost(int numberOfTickets);
};

MovieTicket::MovieTicket(){
    movieName = "Unknown";
    seatNumber = 0;
    ticketPrice = 200;
    isBooked = false;
}

MovieTicket::MovieTicket(string movieName, int seatNumber, float ticketPrice){
    this->movieName = movieName;
    this->seatNumber = seatNumber;
    this->ticketPrice = ticketPrice;
    isBooked = false;
}

void MovieTicket::bookTicket(){
    if(isBooked==true){
        cout<<"Seat already booked!"<<endl;
    }
    else{
        isBooked=true;
        cout<<"Seat booked"<<endl;
    }
}

void MovieTicket::cancelTicket(){
    if(isBooked==false){
        cout<<"Ticket not booked"<<endl;
    }
    else{
        isBooked=false;
        cout<<"Ticket cancelled successfully"<<endl;
    }
}

double MovieTicket::calculateTotalCost(int numberOfTickets){
    return ticketPrice * numberOfTickets;
}

void MovieTicket::displayTicketDetails(){
    cout<<"Movie Name: "<<movieName<<endl;
    cout<<"Seat Number: "<<seatNumber<<endl;
    cout<<"Price per ticket: "<<ticketPrice<<endl;
    cout<<"Total price for 2 tickets: "<<calculateTotalCost(2)<<endl;
}

int main(){
    MovieTicket M("Saiyaara",1,800);

    M.bookTicket();
    M.displayTicketDetails();

    return 0;
}