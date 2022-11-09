#ifndef __POINT_H__
#define __POINT_H__

class Point {
        int size;
        int *data;
    public:
        Point();
        Point(const int arr[], int size);
        Point(const Point &o);

        int getSize() const;
        void print() const;

        void push_back(int elem);
        void insert(int elem, int pos);
        void remove(int pos);

        ~Point();
};

#endif
