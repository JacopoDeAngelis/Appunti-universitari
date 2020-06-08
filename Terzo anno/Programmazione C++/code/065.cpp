template<class T, class U>
auto operator+(const Matrix<T>& a, const Matrix<U>& b) –> Matrix<decltype(T{}+U{})>;
