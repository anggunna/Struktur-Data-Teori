#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Animal {
    string type; 
    int arrivalTime; 

    Animal(string _type, int _arrivalTime) : type(_type), arrivalTime(_arrivalTime) {}
};

struct AnimalShelter {
    queue<Animal> catQueue; 
    queue<Animal> dogQueue; 
    int timeCounter; 

    AnimalShelter() {
        timeCounter = 0; 
    }

    Animal dequeueAny() {
        if (catQueue.empty() && dogQueue.empty()) {
            cout << "Tidak ada hewan yang tersedia untuk diadopsi.\n";
            return Animal("", -1); 
        } else if (catQueue.empty()) {
            Animal oldestDog = dogQueue.front();
            dogQueue.pop();
            return oldestDog;
        } else if (dogQueue.empty()) {
            Animal oldestCat = catQueue.front();
            catQueue.pop();
            return oldestCat;
        } else {
            if (catQueue.front().arrivalTime < dogQueue.front().arrivalTime) {
                Animal oldestCat = catQueue.front();
                catQueue.pop();
                return oldestCat;
            } else {
                Animal oldestDog = dogQueue.front();
                dogQueue.pop();
                return oldestDog;
            }
        }
    }

    Animal dequeueCat() {
        if (catQueue.empty()) {
            cout << "Tidak ada kucing yang tersedia untuk diadopsi.\n";
            return Animal("", -1); 
        } else {
            Animal oldestCat = catQueue.front();
            catQueue.pop();
            return oldestCat;
        }
    }

    Animal dequeueDog() {
        if (dogQueue.empty()) {
            cout << "Tidak ada anjing yang tersedia untuk diadopsi.\n";
            return Animal("", -1); 
        } else {
            Animal oldestDog = dogQueue.front();
            dogQueue.pop();
            return oldestDog;
        }
    }

    void enqueue(string type) {
        if (type == "kucing") {
            catQueue.push(Animal(type, timeCounter++));
        } else if (type == "anjing") {
            dogQueue.push(Animal(type, timeCounter++));
        } else {
            cout << "Hewan yang tidak dikenal.\n";
        }
    }
};

int main() {
    AnimalShelter shelter;

    shelter.enqueue("kucing");
    shelter.enqueue("anjing");
    shelter.enqueue("kucing");
    shelter.enqueue("anjing");

    Animal adoptedAnimal = shelter.dequeueAny();
    cout << "Hewan yang diadopsi: " << adoptedAnimal.type << endl;

    Animal adoptedCat = shelter.dequeueCat();
    cout << "Kucing yang diadopsi: " << adoptedCat.type << endl;

    Animal adoptedDog = shelter.dequeueDog();
    cout << "Anjing yang diadopsi: " << adoptedDog.type << endl;

    return 0;
}