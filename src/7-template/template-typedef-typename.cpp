#include <iostream>


template <typename Distance>
class KDTreeIndex : public NNIndex<Distance> {
public:
    typedef typename Distance::ElementType ElementType;
    typedef typename Distance::ResultType DistanceType;
    typedef NNIndex<Distance> BaseClass;
    typedef bool needs_distance;
    KDTreeIndex();
    ~KDTreeIndex();

private:
    DistanceType* mean_;
    DistanceType* var_;
};

int main() {


    return 0;
}