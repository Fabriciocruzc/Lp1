#include <string>

template <class T>
class VectorSuplementar
{
public:
	size_t size;
	size_t capacity = 20;
	T* content;

	void adicionar_v(T content){

		if (size >=  capacity) {
			T content2 = new T[capacity*2];
			for (size_t i = 0; i < size; i++) {
			content2[i] = content[i];
			}

			delete[] content;
			content = content2;

		}
		
		this->capacity = 20;
		this->content = new T[capacity];	
		
	}	
	
};