//following each pair func is same,not overloaded func.

Record lookUp(const Account &user);
Record lookUp(const Account&);   //this func shenglue formal paraemeter's name.

typedef Phone Telno;
Record lookUp(const Phone&);
Record lookUp(const Telno&);


