#pragma one
#include <iostream>
#include <math.h>


class Drawable{
    public:
    virtual void draw(){
        std::cout<<"test";
    }
    // gdy w klasach pochodnych daje override to wyrzuca bledy ze nie ma potrzeby override
    virtual double length(){
        std::cout<<"Nie obliczona dlugosc";
        return 0;
    }
};
class Transformable{
public:
    virtual void shift(double x, double y) = 0;
};

class Point:public Drawable,public Transformable{
    private:
        double _x, _y;
    
    public:
    Point(double first, double second)
       : _x{first}, _y{second}{}
    
    friend std::ostream& operator<<(std::ostream& output, const Point& point){
        point.draw(output);
        return output;
    }

    void draw(std::ostream &output) const {
        std::cout<<" (" <<_x <<", " << _y << ")";
    }
    double sendX()const{
        return _x;
    }
    double sendY()const{
        return _y;
    }
    double getDistance(Point p) const{
       return std::sqrt(static_cast<double>(std::pow(p.sendX() - sendX(), 2) + std::pow(p.sendY() - sendY(), 2)));
       
    } 
    void shift(double x, double y) override{
        _x += x;
        _y += y;
    }
};

class Circle:public Drawable,public Transformable{
    private:
        Point _center;
        double _center_length, _pi = 3.14;

    public:
        Circle(const Point& point_for_circle,double point_for_circle_length)
          : _center{point_for_circle}, _center_length{point_for_circle_length} {}
       /* void draw(Circle circle_to_draw) {
            std::cout << "\n Rysujemy kolo o srodu " <<_center <<"i promineiu: " << _center_length; 
        }*/
        
        void draw() override{
         std::cout<< "\n Rysujemy kolo o srodku " << _center << " i promieniu " << _center_length;
        }
        double length()  override {
            return 2*_pi*_center_length;
        }
        double area() const {
            return _pi*std::pow(_center_length, 2);
        void shift(double x, double y) override{
            _center.shift(x, y);
    }
    }
        


};

class Section:public Drawable,public Transformable{
    private:
        Point _point_begin, _point_end;
    public:
    Section(Point one, Point two)
        : _point_begin{one}, _point_end{two}{}
   
    double length() const {
        return _point_begin.getDistance(_point_end);
    }
    Point sendBegin()const{
        return _point_begin;
    }
    Point sendEnd()const{
        return _point_end;
    }
    void draw() override{
         std::cout<< "\n Rysujemy odcinek od" << _point_begin << " do " << _point_end;
        }
    void shift(double x, double y) override{
        _point_begin.shift(x, y);
        _point_end.shift(x, y);
    }
    
};
class Deltoid:public Drawable,public Transformable{
    private:
        Point _array[4];
        //Section _first, _second;
        double _sum{0};
        
    public:
    
    Deltoid (Section first,Section second)
        //: _first{first}, _second{second}{}
        :_array{first.sendBegin(),second.sendBegin(),first.sendEnd(),second.sendEnd()}{}
    Deltoid (Point first,Point second, Point third, Point thourd)
        : _array{first,second,third,thourd}{}
    void draw() override{
         std::cout<< "\n Rysujemy deltoid o wierzcholkach " ;
         for(int i=0;i<4;i++)
         std::cout<< _array[i] ;
        }
        double length() const {
        /*
        for(int i = 0;i<3;i++)
           _sum+= _array[i].getDistance(_array[i+1]) 
           
         _sum+=   _points[3].getDistance(_points[0]);
        return _sum;*/
        return _array[0].getDistance(_array[1])+
        _array[1].getDistance(_array[2])+
        _array[2].getDistance(_array[3])+
        _array[3].getDistance(_array[0]);
    }
};
void draw(Drawable* figur){
    figur->draw();
}