class Student{
    private:
        int rollNo;
        int age;
    public:
        void setRollNo(int rollNo){
            this->rollNo=rollNo;
        }
        void setAge(int age){
            this->age=age;
        }
        int getRollNo(){
            return rollNo;
        }
        int getAge(){
            return age;
        }
};