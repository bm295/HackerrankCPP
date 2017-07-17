
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
    private:
        int l, b, h;
    public:
        Box() {
            l = 0;
            b = 0;
            h = 0;
        }
        Box(int length, int breadth, int height) {
            l = length;
            b = breadth;
            h = height;
        }
        Box(Box& B) {
            l = B.getLength();
            b = B.getBreadth();
            h = B.getHeight();
        }
        int getLength() {
            return l;
        }
        int getBreadth() {
            return b;
        }
        int getHeight() {
            return h;
        }
        long long CalculateVolume() {
            return (long long) l * b * h;
        }                
};

bool operator<(Box& a, Box& b) {
    return a.getLength() < b.getLength() || (a.getBreadth() < b.getBreadth() && a.getLength() == b.getLength()) || (a.getHeight() < b.getHeight() && a.getBreadth() == b.getBreadth() && a.getLength() == b.getLength());
}

ostream& operator<<(ostream& out, Box& B) {
    return out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
}
