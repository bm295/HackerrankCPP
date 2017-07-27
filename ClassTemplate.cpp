/*Write the class AddElements here*/
template<typename T>
class AddElements {
    T element;
    public:
        AddElements(T arg) {
            element = arg;
        }
        T add(T newElement) {
            return element + newElement;
        }
};

template <>
class AddElements <string> {
    string element;
    public:
        AddElements(string arg) {
            element = arg;
        }
        string concatenate(string newElement) {
            return element + newElement;
        }
};
