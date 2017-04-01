#pragma once
class Item
{
public:
	Item(Item *,int);
	~Item();

	Item * prev;
	int value;
};

