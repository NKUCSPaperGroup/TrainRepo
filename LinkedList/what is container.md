# What is it

**Container**  is used as a box of elements. It can be use to **restore** any type of elements.

A container can **simplify** the operation doing  at a group of variations. **Arrays** are the simplest container.



Collection is the alien name of container, while `set` is a special type of container.

## How and when we use it

The most common situation  is that **we can’t know how many variations will be used in advance**. So we can define a container at first and add elements later.  And it is used to **do a lot of similar  operations** as mentioned above. You can use `Range for` like

```C++
for(auto i in arr)// arr is the container and i is the element
{
    cout<<i<<endl;
}
```

There are also many other way to use it. For example the `string` is a container of `char.`

# Types in `std`

`vector`,`list` are the most useful. *In fact map is also useful but it will be more difficult,*

`vector` is  a special array which  will change its size to fit the amount of elements in it.

`list` is a sequence which is composed like    pre_node{data1,pointer1} -> next_node{date2,pointer2}



**You must read the Chapter 3 and understand the array,vector and string.**

Don’t be confused by the boring functions, you should only know how it is used. When you need a specific function, you can look it up.



For more details, you can search the` API` of them (application programming interface). 

We always call the help as `document` in CS.



Which type should we choose?

It depends on the situation we use them,especially the times of operation *add,remove and foreach*



# More

A important part of container is **iterator** . You can read the book to get the information.

Chapter 3.4,Chapter 9,Chapter 10 is useful.



If you want to know more containers, you can read Chapter 11. 