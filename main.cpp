
#include <optional>
#include <math.h>
struct point{

double x=0;
double y=0;

};


//rad to degrees: num* (180/pi) 
//angle a: (leg of triangle as opposed to base): arcsin(a/c).  
//angle b: (base): arcsin(b/c)
struct sewtriangle{

    bool qshowtriangle;
    point p1;
    point p2;
    point tripoint;
    double tribase;
    double trileg;
    double trihypot;
    double throwangle;  //angle opposite a, the leg
    double lesserangle;  //angle opposite b, the base
    


    point calc_tripoint(){return point{this->p2.x-this->p1.x,this->p2.y-this->p1.y};};

    double calc_throwangle(){return asin(this->tribase/this->trileg)*(180/3.141596);};  //in degrees
    double calc_lesserangle(){return asin(this->tribase/this->trihypot)*(180/3.141596);};
    double calc_tribase(){return this->p2.x-this->p1.x;}
    double calc_trileg(){return this->p2.y-this->p1.y;}
    double calc_hypot(){return pow(pow(this->tribase,2.0)+pow(this->trileg,2.0),0.5);}
    void applyangles(){this->throwangle=this->calc_throwangle(); this->lesserangle=this->calc_lesserangle();};
    sewtriangle(const point& supp1,const point&supp2,bool supqiseam=false,bool supqshowtriangle=true):
        p1(supp1),p2(supp2),qshowtriangle(supqshowtriangle),tripoint(this->calc_tripoint()),
        tribase(calc_tribase()),trileg(calc_trileg()),trihypot(calc_hypot()),throwangle(calc_throwangle()),lesserangle(calc_lesserangle()){};

};


struct sewobject{

    sewtriangle normal;
    std::optional<sewtriangle> seamedver;
    std::optional<sewtriangle> curvefirstpart;
    std::optional<sewtriangle> curvesecondpart;

    double seamlength;

    void calc_seam(){};
    void calc_curve(){};


    bool has_curve(){if (this->seamedver){return true;} else {return false;}};
    sewobject(const sewtriangle& supnorm,const double& supseamlength=1.5,bool qisseamed=false)
        :normal(supnorm),seamedver(),curvefirstpart(),curvesecondpart(),seamlength(supseamlength){if (qisseamed){this->calc_seam();}}




};



struct sewshape{

//final shape

};


/*
def makepattern(seamlength):
    trueseamlength=Decimal(seamlength)
    points_list=list()
    stop = input("Input points in X and Y, E.g 25.6 62.1. Enter 'stop' to stop").split()
    while stop[0]!="stop":
        points_list.append(stop)
        stop=input("Input points in X and Y, E.g 25.6 62.1. Enter 'stop' to stop").split()
    for arg in range(points_list): #convert all points to Decimals
        points_list[arg][0]=Decimal(points_list[arg][0])
        points_list[arg][1] = Decimal(points_list[arg][1])



        seamanswer=int(input("Are these points part of a seam? (1 or 0)"))
        seamdirection=""
        seamx="no"
        seamy="no"
        if seamanswer==1:
            while seamdirection != "in" or seamdirection != "out":
                seamdirection=input("Is the seam inwards or outwards (assuming a left startingpoint). enter 'in' or 'out'")

*/




int main(){






/*

#enter a point
#ask if seam
#if seam, SCAN for direction, and ask if the seam goes inwards or outwards (Assumes outwards)
#enter a second point
#ask if curve, if curve, prompt to add the middle of curve point (and draw these on their own)
#calculate its triangle sides. the raw distance between them is the hypotenuse
#calculate its triangle angles
#repeat

#draw:
#draw points in one colour
#write their coordinates in a different colour
#draw their lengths and angles in the same first colour
#find absolute height and absolute length and draw those in the same colour
#draw curved boys in a different colour
#draw seamed version of the lines in a different colour
#draw curved seam boys in yet another colour

#ask for edits
*/






return 0;};
