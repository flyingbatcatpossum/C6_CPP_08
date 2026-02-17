# C6_CPP_08

## Templates and Data Structures

### EX00
* ``easyfind(typename t, int i)``

* include ``<list>``, dynamic listing of same type elements
movable from FIRST and LAST</br>
	* ``std::list<int> nb = {2, 54, 8, 74, 12}`` -> for a list of INT<br/>
	* ``nb.front()`` or ``nb.back()`` to access FIRST or LAST element<br/>
	* ``nb.push_front(34)`` or ``nb.push_back(34)`` to push from FRONT or LAST<br/>
	* ``nb.pop_front()`` or ``nb.pop_back()`` to remove elements at FRONT or LAST

* include ``vector``, dynamic listing of same type elements only movable from LAST to FIRST</br>
	* ``std::vector<int> nb = {7, 2, 53, 1, 9, 61}`` -> for a list of INT</br>
	* ``nb.front()`` or ``nb.back()`` to access FIRST or LAST element<br/>
	* ``nb.push_back(43)`` and ``nb.pop_back()`` to add or remove at LAST</br>

* ``template <typename T>`` : must be in a header directly, and out of a class.<br/>
Available for only one declaration at a time. Serves as a placeholder for defined variable (int, char, ...)

* ``typename T::iterator`` to create an iterator (i++) corresponding to the listing type, to be able to navigate it
* ``std::distance(list.begin(), it)`` is used to calculate the position of the iterator within the list

* ``throw/catch`` is used to not return ``it`` when not found because it can't be revalued

### EX01

* ``span(unsigned int N)`` as constructor to determine MAX space given to the list
* ``addNumber(), shortestSpan(), longestSpan()`` required and ``addList()`` created to generate numbers to fill up the list by random
	* ``shortestSpan()`` will calculate the distance between each numbers and returns the shortest
	* ``longestSpan()`` will calculate the distance between the lowest and the highest values of the list
* still more details to add for exceptions