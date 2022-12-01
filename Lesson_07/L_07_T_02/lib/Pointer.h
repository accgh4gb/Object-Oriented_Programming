
template <typename T>
class Pointer
{
	T* tPtr;
public:
	Pointer(T* ptr = nullptr) : tPtr(ptr){}
	Pointer(Pointer& ptr)
	{
		tPtr = ptr.tPtr;
		ptr.tPtr = nullptr;
	}
	~Pointer() { delete tPtr; }
	bool isNull() const { return tPtr == nullptr; }
	Pointer& operator= (Pointer& tP)
	{
		if (&tP == this)
		{
			return *this;
		}

		delete tPtr;
		tPtr = tP.tPtr;
		tP.tPtr = nullptr;
		return *this;
	}
	
	T* operator->() const { return tPtr; }
	T& operator* () const { return *tPtr; }
};
