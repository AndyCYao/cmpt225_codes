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
    
        ostream operator<<(Box &b){
            ostream out;
            out << b.getLength() << " " << b.getBreadth() << " " << b.getHeight();
            return out;
        }
};