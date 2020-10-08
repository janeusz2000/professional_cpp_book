#ifndef OBJECTS_CPP
#define OBJECTS_CPP

#include "PacketConnector\objects.h"

#include <exception>

// template <typename T>
// PacketBuffer<T>::PacketBuffer(size_t maxSize) : _maxsize(maxSize){};

// template <typename T>
// bool PacketBuffer<T>::bufferPacket(const T &packet)
// {
//     if (_maxsize > 0 && _Packets.size() == _maxsize)
//     {
//         return false;
//     }
//     _Packets.push(packet);
//     return true;
// }

// template <typename T>
// T PacketBuffer<T>::getNextPacket()
// {
//     if (_Packets.empty())
//     {
//         throw std::out_of_range("Buffer is empty");
//     }

//     T temp = _Packets.front();
//     _Packets.pop();
//     return temp;
// }
#endif