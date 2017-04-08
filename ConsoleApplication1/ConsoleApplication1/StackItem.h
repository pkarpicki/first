#pragma once
class StackItem
{
public:
	StackItem(StackItem *,int);
	~StackItem();

	StackItem * prev;
	int value;
};

