class MyHashSet(object):

    def __init__(self):
        self.v = []

    def add(self, key):
        """
        :type key: int
        :rtype: None
        """
        if not self.contains(key):
            self.v.append(key)
        

    def remove(self, key):
        """
        :type key: int
        :rtype: None
        """
        if self.contains(key):
            self.v.remove(key)
        

    def contains(self, key):
        """
        :type key: int
        :rtype: bool
        """
        return key in self.v


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)