/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmerge.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:13:52 by bhennequ          #+#    #+#             */
/*   Updated: 2024/02/07 11:13:07 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pmerge.hpp"

Pmerge::Pmerge(int argc, char **argv)
{
    for (int i = 1; argv[i]; i++)
    {
        int value = atoi(argv[i]);
        if (value <= 0)
        {
            std::cerr << "Error: invalid input value: negative input !" << std::endl;
            exit(1);
        }
        dataList.push_back(value);
        dataVec.push_back(value);
    }
    std::cout << "Before: ";
    printCont(dataList);

    clock_t startList = clock();
    sortList(dataList);
    clock_t endList = clock();
    double durationList = static_cast<double>(endList - startList) / CLOCKS_PER_SEC;

    clock_t startVector = clock();
    sortVector(dataVec, 0, dataVec.size() - 1, 2);
    clock_t endVector = clock();
    double durationVector = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC;
    
    std::cout << "After: ";
    printCont(dataVec);
    printCont(dataList);
    
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << durationList << " us" << std::endl;
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << durationVector << " us" << std::endl;

}


template <typename T>
void Pmerge::printCont(const T contenair)
{
    typename T::const_iterator it;

    for(it = contenair.begin(); it != contenair.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

/*void Pmerge::sortList(std::list<int>& list)
{
    std::list<int>::iterator it1, it2;
    
    for (it1 = list.begin(); it1 != list.end(); ++it1)
    {
        int tmp = *it1;
        it2 = it1;
        while (it2 != list.begin() && *(--it2) > tmp)
        {
            std::list<int>::iterator prev = it2;
            --prev;
            *it2 = *prev;
            --it2;
        }
        *it2 = tmp;
    }
}*/

void mergeList(std::list<int>& list, std::list<int>::iterator left,
               std::list<int>::iterator mid, std::list<int>::iterator right) {
    std::list<int> L;
    std::list<int> R;

    for (std::list<int>::iterator it = left; it != mid; ++it)
        L.push_back(*it);
    for (std::list<int>::iterator it = mid; it != right; ++it)
        R.push_back(*it);

    std::list<int>::iterator it1 = L.begin();
    std::list<int>::iterator it2 = R.begin();
    std::list<int>::iterator it = left;

    while (it1 != L.end() && it2 != R.end()) {
        if (*it1 <= *it2) {
            *it = *it1;
            ++it1;
        } else {
            *it = *it2;
            ++it2;
        }
        ++it;
    }

    while (it1 != L.end()) {
        *it = *it1;
        ++it;
        ++it1;
    }

    while (it2 != R.end()) {
        *it = *it2;
        ++it;
        ++it2;
    }
}

void insertionSortList(std::list<int>& list, std::list<int>::iterator left,
                       std::list<int>::iterator right) {
    for (std::list<int>::iterator it1 = left; it1 != right; ++it1) {
        int key = *it1;
        std::list<int>::iterator it2 = it1;
        
        while (it2 != left && *(--it2) > key) {
            *(std::next(it2)) = *it2;
            --it2;
        }

        *(std::next(it2)) = key;
    }
}

void Pmerge::sortList(std::list<int>& list, std::list<int>::iterator left,
                      std::list<int>::iterator right, int k) {
    if (std::distance(left, right) <= k) {
        insertionSortList(list, left, right);
    } else {
        std::list<int>::iterator mid = left;
        std::advance(mid, std::distance(left, right) / 2);
        sortList(list, left, mid, k);
        sortList(list, mid, right, k);
        mergeList(list, left, mid, right);
    }
}

void mergeVec(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
        {
            arr[k] = L[i];
            i++;
        } 
        else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void insertionSortVec(std::vector<int>& arr, int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void Pmerge::sortVector(std::vector<int>& arr, int left, int right, int k) {
    if (right - left + 1 <= k) {
        insertionSortVec(arr, left, right);
    } else {
        int mid = left + (right - left) / 2;
        sortVector(arr, left, mid, k);
        sortVector(arr, mid + 1, right, k);
        mergeVec(arr, left, mid, right);
    }
}