#ifndef MAIN_CPP
#define MAIN_CPP

#include "PacketConnector\objects.h"

int main()
{
    PacketBuffer<IPPacket> ipPackets(3);

    for (int i = 1; i <= 4; ++i)
    {
        if (!ipPackets.bufferPacket(IPPacket(i)))
        {
            std::cout << "Packet " << i << "dropped (queue is full)." << std::endl;
        }
    }

    while (true)
    {
        try
        {
            IPPacket packet = ipPackets.getNextPacket();
            std::cout << "Processing packet " << packet.getID() << std::endl;
        }
        catch (const std::out_of_range &)
        {
            std::cout << "Queue is empty. " << std::endl;
            break;
        }
    }
}

#endif