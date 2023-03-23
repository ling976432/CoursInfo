class ParkingLot {
    int type;
    int capacity;
public:
    ParkingLot(int typ, int cap) : type(typ), capacity(cap) {}
    
    void addSize(int size) {
        capacity += size;
    }
    
    bool addCar() {
        if (capacity > 0) {
            capacity--;
            return true;
        }
        return false;
    }
};

class ParkingSystem {
    unordered_map <int, ParkingLot*> type_lot;
public:
    ParkingSystem(int big, int medium, int small) {
        addLot(1, big);
        addLot(2, medium);
        addLot(3, small);
    }
    
    void addLot(int lotType, int size) {
        if (type_lot.find(lotType) == type_lot.end()) {
            type_lot[lotType] = new ParkingLot(lotType, size);
        } else {
            type_lot[lotType]->addSize(size);
        }
    }
    
    bool addCar(int carType) {
        if (type_lot.find(carType) != type_lot.end()) {
            return type_lot[carType]->addCar();
        }
        return false;
    }
};
