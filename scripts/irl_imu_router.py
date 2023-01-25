import rospy
from p2_drone.msg import ImuData
import struct
import socket

server = socket.socket(socket.AF_INET, socket.SOCK_DGRAM, socket.IPPROTO_UDP)
server.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEPORT, 1)
server.setsockopt(socket.SOL_SOCKET, socket.SO_BROADCAST, 1)


def callback(data):
    packed = struct.pack("9d", data.accelerometer.x, data.accelerometer.y, data.accelerometer.z,
                         data.gyro.x, data.gyro.y, data.gyro.z,
                         data.compass.x, data.compass.y, data.compass.z)
    server.sendto(packed, ('192.168.1.255', 5678))

    
if __name__ == "__main__":
    rospy.init_node('node_name')
    rospy.Subscriber("/observer/calibrated_imu_data", ImuData, callback)
    rospy.spin()

