typedef std::string string;

inline string shorterThan(const string &s1,const string &s2){
    return (s1.size() < s2.size()) ? s1 : s2;
}
