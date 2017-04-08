#pragma once
class FIFOItem
{
public:
	FIFOItem(FIFOItem *,int);
	~FIFOItem();

	FIFOItem * prev;
	int value;
};

