int main () {
  double PI=acos(-1.0);
  cout<<PI<<'\n'; // 3.14159
  cout<<atan(1)*180/PI<<'\n'; // 45
  cout<<atan(-1)*180/PI<<'\n'; // -45
  cout<<atan2(1,1)*180/PI<<'\n'; // 45
  cout<<atan2(-1,1)*180/PI<<'\n'; // -45
  return 0;
}