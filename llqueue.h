
template<class T>
class Queue{
	T* data_;
	int maxSize_;
	int currSize_;
	void grow(){
		T* tmp=new T[maxSize_*2];
		for(int i=0;i<currSize_;i++){
			tmp[i]=data_[i];
		}
		delete data_;
		data_=tmp;
		maxSize_=maxSize_*2;
	}
public:
	Queue(max=100){
		data_=new T[max];
		maxSize_=max;
		currSize_=0;
	}
	void enqueue(const T& dat){
		if(currSize_ == maxSize_){
			grow();
		}
		
	}
	void dequeue(){
	}
	const T& top(){
	}
	bool isEmpty() const;
};