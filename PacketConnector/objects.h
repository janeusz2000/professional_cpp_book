#ifndef OBJECTS_H
#define OBJECTS_H

#include <iostream>
#include <queue>

template <typename T>
class PacketBuffer
{
public:
    PacketBuffer(size_t maxsize = 0);
    virtual ~PacketBuffer() = default;
    bool bufferPacket(const T &packet);
    T getNextPacket();

private:
    std::queue<T> _Packets;
    size_t _maxsize;
};

class IPPacket final
{
public:
    IPPacket(int id) : _ID(id){};
    int getID() const { return _ID; }

private:
    int _ID;
};

template <typename T>
PacketBuffer<T>::PacketBuffer(size_t maxSize) : _maxsize(maxSize){};

template <typename T>
bool PacketBuffer<T>::bufferPacket(const T &packet)
{
    if (_maxsize > 0 && _Packets.size() == _maxsize)
    {
        return false;
    }
    _Packets.push(packet);
    return true;
}

template <typename T>
T PacketBuffer<T>::getNextPacket()
{
    if (_Packets.empty())
    {
        throw std::out_of_range("Buffer is empty");
    }

    T temp = _Packets.front();
    _Packets.pop();
    return temp;
}

#endif