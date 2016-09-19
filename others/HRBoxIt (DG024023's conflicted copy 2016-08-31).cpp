//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 
class Box{
    private:
        int length, breadth, height;
    public:
        Box(){
            length = 0;
            breadth = 0;
            height = 0;
            BoxesCreated += 1;
        }
        Box(int nlength, int nbreadth, int nheight){
            length = nlength;
            breadth = nbreadth;
            height = nheight;
            BoxesCreated += 1;
        }
        Box(const Box& newBox){
            length = newBox.length;
            breadth = newBox.breadth;
            height = newBox.height;
            BoxesCreated += 1;
        }
        ~Box(){
            BoxesDestroyed += 1;
        }
        
        int getLength(){
            return length;
        }
    
        int getBreadth(){
            return breadth;
        }
    
        int getHeight(){
            return height;
        }
    
        long long CalculateVolume(){
            return length * breadth * height;
        }
    
        bool operator<(Box &b){
            if (length < b.getLength()){
                return true;
            }
            else if ((breadth < b.getBreadth()) && (length == b.getLength())){
                return true;
            }
            else if ((height < b.getHeight()) && (breadth == b.getBreadth()) && (length == b.getLength())){
                return true;
            }
            else{
                return false;
            }
        }
        /*
        ostream& operator<<(ostream& os, Box& b){
            os << "testing";
            return os;
        }
        */
    
        friend ostream& operator<<(ostream& out, Box B){
            return out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight(); }
};
// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// Destructor
// ~Box()
// {

// }

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box &b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box B)

