# C6_CPP_08

## Templates and Data Structures

### EX00
* ``easyfind(list t, int i)``

* include ``<list>``, dynamic listing of same type elements<br/>
``std::list<int> nb = {2, 54, 8, 74, 12}`` -> for a list of INT<br/>
nb.front() OR nb.back() to access FIRST or LAST element<br/>
nb.push_front(34) OR nb.push_back(34) to push from FRONT or LAST<br/>
nb.pop_front() or nb.push_back() to remove elements at FRONT or LAST

* ``template <typename T>`` : must be in a header directly, and out of a class.<br/>
Available for only one declaration at a time

### EX01
