##删除链表中重复的结点
###题目描述
在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 
例如，链表1->2->3->3->4->4->5 处理后为 1->2->5
##cpp语法错误

1.error: no viable conversion from 'ListNode2 *' to 'struct ListNode2'

```c++
struct ListNode2 {
    int val;
    struct ListNode2 *next;
    // todo struct 里也有这种写法？是C++独有、C里面没有的写法吗？
    ListNode2(int x) :
            val(x), next(NULL) {}

};

struct ListNode2 node5 = new ListNode2(5);
```

原因，C++里面new一个类的时候返回的是一个新创建的类的指针，将指针赋值给一个本地对象肯定要报错，故正确代码应该是

```c++
struct ListNode2 *node5 = new ListNode2(5);
```

但是，非常奇怪，为什么 `/Users/cg/data/code/note/c/jian-zhi-offer-cpp/linked_list/print_linked_list_from_tail_to_head/01/test.cpp`
中不报错呢？