# 19.CPP-MODULE-07

* [Templates](#Templates)  

### Templates
> Self-explanatory see the example
```C
template<typename T> const T &min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

min (2,3)           	// return 3
max ("str1","str2")	// return str2

```
