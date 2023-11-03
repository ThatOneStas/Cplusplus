
#include <iostream>
#include <vector>
#include "plane.h"
#include "planeCargo.h"
#include "planeMilitary.h"
#include "planePassanger.h"
#include "Airport.h";

#include "MediaPlayer.h"
#include "AudioPlayer.h"
#include "VideoPlayer.h"

using namespace std;

int main()
{
    //// static arr
    //int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    //int arr2[5];
    //// intup data
    //for (int i = 0; i < 5; i++) {
    //    arr2[i] = 1;
    //}
    //// show arr
    //for (int i = 0; i < 5; i++) {
    //    cout << arr2[i];
    //}

    //// -EXTRA- vector
    //vector<int> vector;

    //// add into the end
    //vector.push_back(5);
    //vector.push_back(2);
    //vector.push_back(3);
    //vector.push_back(9);

    //// show arr
    //for (int i = 0; i < vector.size(); i++) {
    //    if (i == 3) {
    //        cout << 3 << endl;
    //    }
    //}

    /*Airport airport ;
    Plane* Cargo = new planeCargo(123, "Boing");
    Plane* Military = new planeMilitary(429, "AF");
    Plane* Passanger = new planePassenger(773, "British Airlines");
    airport.addPlane(Cargo);
    airport.addPlane(Military);
    airport.addPlane(Passanger);
    airport.showPlanes();*/

    VideoPlayer video;
    MediaPlayer media;
    AudioPlayer audio;
    // video.pause();
    // media.reproduce();
    while(true){
        string choice;
        cout << "+ / -" << endl;
        cin >> choice;
        if (choice == "+"){
            if (audio.getSound() == 10) {
                cout << "The sound is 10 (max)." << endl;
            }
            else
            {
                audio.regulate(choice);
                cout << audio.getSound() << endl;
            }
        }
        else if (choice == "-") {
            if (audio.getSound() == 0) {
                cout << "The sound is 0 (min)." << endl;
            }
            else
            {
                audio.regulate(choice);
                cout << audio.getSound() << endl;
            }
        }
        else
        {
            break;
        }
    }

}

