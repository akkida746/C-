using namespace std;

template <typename T>
T minimum(const T& lhs, const T& rhs){
	return lhs < rhs ? lhs: rhs;
}

template<class T>
class B{
	T t;
	public:
		void printName(){
			cout << typeid(t).name() << endl;
		}
};
