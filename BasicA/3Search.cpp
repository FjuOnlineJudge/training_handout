double trinary_search(double l,double r){
static const double EPS=1e−7;
while(r−l>EPS){
        double ml=(l+l+r)/3,mr=(l+r+r)/3;
        if(f(mr)>f(ml)) r=mr;
        else l=ml;
    }
    return l;
}