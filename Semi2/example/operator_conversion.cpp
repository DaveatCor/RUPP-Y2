class Worker {
      private:
              int id;
              char name[20];
              char sex;
              float hour, rate;
              
      public:
             Worker(int i =123, char *na="abc", char s='M', float h = 0, float r = 0){
                        id = i;
                        strcpy(name, na);
                        sex = s;
                        hour = h;
                        rate = r; 
             }
             float income(){
                   return hour*rate;
             }
             
             friend iostream >>(istream &is, Worker &p){
                    cout<<"Id: "; is>>p.id;
                    cout<<"Name: "; 
                    // clear buffer
                    is.seekg(0, ios::end); is.clear();
                    is.get(p.name);
                    
                    cout<<"Sex: "; cin>>p.sex;
                    cout<<"Income: "; cin>>p.income;
                    cout<<"Rate: "; cin>>p.rate;
             }
             
             float operator+(Worker p){
                   return (income()+p.income());
             }
             
             int operator>(Worker p){
                 return (income()>p.income());
             }
             
             Worker operator++(){
                    ++i;
                    return *this;
             }
             
             Worker operator++(int){
                    i++;
                    return Worker(id, name, sex, hour, rate);
             }
             
             operator int(){
                      return id;
             }
             
             operator char*(){
                      return name;
             }
             
             operator char(){
                      return sex;
             }
             
             operator float(){
                      return income();
             }
} 

main(){
       Worker p1(1, "Mary", F, 97, 5), p2(2, "Dara", 'M', 75, 7), p3, p4;
       float 
       
}
