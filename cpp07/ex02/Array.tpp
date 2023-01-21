
template <typename T>
Array<T>::Array(void)
{
	this->arr = new T[0];
	this->len = 0;
}

template <typename T>
Array<T>::Array(const unsigned int &n)
{
	this->arr = new T[n];
	this->len = n;
}

template <typename T>
Array<T>::Array(const Array<T> &to_copy)
{
	*this = to_copy;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &to_copy)
{
	this->arr = new T[to_copy.len];
	this->len = to_copy.len;
	for (size_t i = 0; i < to_copy.len; i++)
	{
		this->arr[i] = to_copy.arr[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](int idx) const
{
	if (idx >= 0 && static_cast<unsigned int>(idx) < this->len)
		return (this->arr[idx]);
	else
        throw Array<T>::OutOfRange();
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return this->len;
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->arr;
}