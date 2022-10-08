graphs=[]


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,1+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,2+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(1+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(2+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "k1-p1+q1",
    "indices": (2+4+1,1+4+1,),
    "vertices":(2+4,1+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "-k1",
    "indices": (4+4+1,3+4+1,),
    "vertices":(2+4,1+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-q1","k1-p1+q1","-k1","p1"),
    "indices": (-2+4+1,1+4+1,3+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,1+4,2+4,-1+4)
    },
 2+4:{
    "momenta": ("-q2","-k1+p1-q1","k1","p2"),
    "indices": (-4+4+1,2+4+1,4+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,1+4,2+4,-3+4)
    }
},
"overall_factor": "+1/2"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,1+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,3+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(2+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(3+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "k1",
    "indices": (2+4+1,1+4+1,),
    "vertices":(1+4,2+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "k1-p1",
    "indices": (4+4+1,3+4+1,),
    "vertices":(3+4,1+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "-k1+q1",
    "indices": (6+4+1,5+4+1,),
    "vertices":(3+4,2+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-k1","k1-p1","p1"),
    "indices": (2+4+1,3+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (1+4,2+4,-1+4)
    },
 2+4:{
    "momenta": ("-q1","-k1+q1","k1"),
    "indices": (-2+4+1,5+4+1,1+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,3+4,1+4)
    },
 3+4:{
    "momenta": ("-q2","-k1+p1","k1-q1","p2"),
    "indices": (-4+4+1,4+4+1,6+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,2+4,3+4,-3+4)
    }
},
"overall_factor": "+1"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,3+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,1+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(3+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(2+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "k1",
    "indices": (2+4+1,1+4+1,),
    "vertices":(1+4,2+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "k1-p2",
    "indices": (4+4+1,3+4+1,),
    "vertices":(3+4,1+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "-k1+q2",
    "indices": (6+4+1,5+4+1,),
    "vertices":(3+4,2+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-k1","k1-p2","p2"),
    "indices": (2+4+1,3+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (1+4,2+4,-3+4)
    },
 2+4:{
    "momenta": ("-q2","-k1+q2","k1"),
    "indices": (-4+4+1,5+4+1,1+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,3+4,1+4)
    },
 3+4:{
    "momenta": ("-q1","-k1+p2","k1-q2","p1"),
    "indices": (-2+4+1,4+4+1,6+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,2+4,3+4,-1+4)
    }
},
"overall_factor": "+1"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,1+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,2+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(1+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(3+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "-p1+q1",
    "indices": (2+4+1,1+4+1,),
    "vertices":(3+4,1+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "-k1+p2",
    "indices": (4+4+1,3+4+1,),
    "vertices":(2+4,3+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "-k1",
    "indices": (6+4+1,5+4+1,),
    "vertices":(3+4,2+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-q1","-p1+q1","p1"),
    "indices": (-2+4+1,1+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,1+4,-1+4)
    },
 2+4:{
    "momenta": ("k1-p2","-k1","p2"),
    "indices": (4+4+1,5+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (2+4,3+4,-3+4)
    },
 3+4:{
    "momenta": ("-q2","p1-q1","k1","-k1+p2"),
    "indices": (-4+4+1,2+4+1,6+4+1,3+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,1+4,3+4,2+4)
    }
},
"overall_factor": "+1"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,1+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,3+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(1+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(2+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "-p1+q1",
    "indices": (2+4+1,1+4+1,),
    "vertices":(3+4,1+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "k1+q2",
    "indices": (4+4+1,3+4+1,),
    "vertices":(3+4,2+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "-k1",
    "indices": (6+4+1,5+4+1,),
    "vertices":(3+4,2+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-q1","-p1+q1","p1"),
    "indices": (-2+4+1,1+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,1+4,-1+4)
    },
 2+4:{
    "momenta": ("-q2","-k1","k1+q2"),
    "indices": (-4+4+1,5+4+1,3+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,3+4,2+4)
    },
 3+4:{
    "momenta": ("-k1-q2","p1-q1","k1","p2"),
    "indices": (4+4+1,2+4+1,6+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (2+4,1+4,3+4,-3+4)
    }
},
"overall_factor": "+1"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,2+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,1+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(3+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(1+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "-p2+q2",
    "indices": (2+4+1,1+4+1,),
    "vertices":(3+4,1+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "-k1+p1",
    "indices": (4+4+1,3+4+1,),
    "vertices":(2+4,3+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "-k1",
    "indices": (6+4+1,5+4+1,),
    "vertices":(3+4,2+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-q2","-p2+q2","p2"),
    "indices": (-4+4+1,1+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,1+4,-3+4)
    },
 2+4:{
    "momenta": ("k1-p1","-k1","p1"),
    "indices": (4+4+1,5+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (2+4,3+4,-1+4)
    },
 3+4:{
    "momenta": ("-q1","p2-q2","k1","-k1+p1"),
    "indices": (-2+4+1,2+4+1,6+4+1,3+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,1+4,3+4,2+4)
    }
},
"overall_factor": "+1"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,3+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,1+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(2+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(1+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "-p2+q2",
    "indices": (2+4+1,1+4+1,),
    "vertices":(3+4,1+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "k1+q1",
    "indices": (4+4+1,3+4+1,),
    "vertices":(3+4,2+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "-k1",
    "indices": (6+4+1,5+4+1,),
    "vertices":(3+4,2+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-q2","-p2+q2","p2"),
    "indices": (-4+4+1,1+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,1+4,-3+4)
    },
 2+4:{
    "momenta": ("-q1","-k1","k1+q1"),
    "indices": (-2+4+1,5+4+1,3+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,3+4,2+4)
    },
 3+4:{
    "momenta": ("-k1-q1","p2-q2","k1","p1"),
    "indices": (4+4+1,2+4+1,6+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (2+4,1+4,3+4,-1+4)
    }
},
"overall_factor": "+1"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,1+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,2+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(1+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(2+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "-p1+q1",
    "indices": (2+4+1,1+4+1,),
    "vertices":(3+4,1+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "-p2+q2",
    "indices": (4+4+1,3+4+1,),
    "vertices":(4+4,2+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "k1-p1+q1",
    "indices": (6+4+1,5+4+1,),
    "vertices":(4+4,3+4)
 },
(4+4):{
    "name":"q"+str(4),
    "type": "virtual",
    "momentum": "k1",
    "indices": (8+4+1,7+4+1,),
    "vertices":(3+4,4+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-q1","-p1+q1","p1"),
    "indices": (-2+4+1,1+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,1+4,-1+4)
    },
 2+4:{
    "momenta": ("-q2","-p2+q2","p2"),
    "indices": (-4+4+1,3+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,2+4,-3+4)
    },
 3+4:{
    "momenta": ("-k1","p1-q1","k1-p1+q1"),
    "indices": (8+4+1,2+4+1,5+4+1),
    "vertex_id": 0,
    "edge_ids": (4+4,1+4,3+4)
    },
 4+4:{
    "momenta": ("-k1+p1-q1","p2-q2","k1"),
    "indices": (6+4+1,4+4+1,7+4+1),
    "vertex_id": 0,
    "edge_ids": (3+4,2+4,4+4)
    }
},
"overall_factor": "+1"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,1+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,2+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(1+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(2+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "-p1+q1",
    "indices": (2+4+1,1+4+1,),
    "vertices":(3+4,1+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "-p2+q2",
    "indices": (4+4+1,3+4+1,),
    "vertices":(4+4,2+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "k1-p1+q1",
    "indices": (6+4+1,5+4+1,),
    "vertices":(4+4,3+4)
 },
(4+4):{
    "name":"q"+str(4),
    "type": "virtual",
    "momentum": "k1",
    "indices": (8+4+1,7+4+1,),
    "vertices":(3+4,4+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-q1","-p1+q1","p1"),
    "indices": (-2+4+1,1+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,1+4,-1+4)
    },
 2+4:{
    "momenta": ("-q2","-p2+q2","p2"),
    "indices": (-4+4+1,3+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,2+4,-3+4)
    },
 3+4:{
    "momenta": ("-k1","p1-q1","k1-p1+q1"),
    "indices": (8+4+1,2+4+1,5+4+1),
    "vertex_id": 0,
    "edge_ids": (4+4,1+4,3+4)
    },
 4+4:{
    "momenta": ("-k1+p1-q1","p2-q2","k1"),
    "indices": (6+4+1,4+4+1,7+4+1),
    "vertex_id": 0,
    "edge_ids": (3+4,2+4,4+4)
    }
},
"overall_factor": "+1"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,1+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,2+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(1+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(3+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "-p1+q1",
    "indices": (2+4+1,1+4+1,),
    "vertices":(4+4,1+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "-k1",
    "indices": (4+4+1,3+4+1,),
    "vertices":(3+4,2+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "-k1+p2",
    "indices": (6+4+1,5+4+1,),
    "vertices":(2+4,4+4)
 },
(4+4):{
    "name":"q"+str(4),
    "type": "virtual",
    "momentum": "-k1+q2",
    "indices": (8+4+1,7+4+1,),
    "vertices":(4+4,3+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-q1","-p1+q1","p1"),
    "indices": (-2+4+1,1+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,1+4,-1+4)
    },
 2+4:{
    "momenta": ("k1-p2","-k1","p2"),
    "indices": (6+4+1,3+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (3+4,2+4,-3+4)
    },
 3+4:{
    "momenta": ("-q2","k1","-k1+q2"),
    "indices": (-4+4+1,4+4+1,7+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,2+4,4+4)
    },
 4+4:{
    "momenta": ("k1-q2","p1-q1","-k1+p2"),
    "indices": (8+4+1,2+4+1,5+4+1),
    "vertex_id": 0,
    "edge_ids": (4+4,1+4,3+4)
    }
},
"overall_factor": "+1"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,2+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,1+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(3+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(1+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "-p2+q2",
    "indices": (2+4+1,1+4+1,),
    "vertices":(4+4,1+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "-k1",
    "indices": (4+4+1,3+4+1,),
    "vertices":(3+4,2+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "-k1+p1",
    "indices": (6+4+1,5+4+1,),
    "vertices":(2+4,4+4)
 },
(4+4):{
    "name":"q"+str(4),
    "type": "virtual",
    "momentum": "-k1+q1",
    "indices": (8+4+1,7+4+1,),
    "vertices":(4+4,3+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-q2","-p2+q2","p2"),
    "indices": (-4+4+1,1+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,1+4,-3+4)
    },
 2+4:{
    "momenta": ("k1-p1","-k1","p1"),
    "indices": (6+4+1,3+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (3+4,2+4,-1+4)
    },
 3+4:{
    "momenta": ("-q1","k1","-k1+q1"),
    "indices": (-2+4+1,4+4+1,7+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,2+4,4+4)
    },
 4+4:{
    "momenta": ("k1-q1","p2-q2","-k1+p1"),
    "indices": (8+4+1,2+4+1,5+4+1),
    "vertex_id": 0,
    "edge_ids": (4+4,1+4,3+4)
    }
},
"overall_factor": "+1"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,1+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,2+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(3+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(4+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "-k1",
    "indices": (2+4+1,1+4+1,),
    "vertices":(2+4,1+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "-k1+p1",
    "indices": (4+4+1,3+4+1,),
    "vertices":(1+4,3+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "k1+p2",
    "indices": (6+4+1,5+4+1,),
    "vertices":(2+4,4+4)
 },
(4+4):{
    "name":"q"+str(4),
    "type": "virtual",
    "momentum": "k1-p1+q1",
    "indices": (8+4+1,7+4+1,),
    "vertices":(4+4,3+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("k1-p1","-k1","p1"),
    "indices": (4+4+1,1+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (2+4,1+4,-1+4)
    },
 2+4:{
    "momenta": ("-k1-p2","k1","p2"),
    "indices": (6+4+1,2+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (3+4,1+4,-3+4)
    },
 3+4:{
    "momenta": ("-q1","k1-p1+q1","-k1+p1"),
    "indices": (-2+4+1,7+4+1,3+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,4+4,2+4)
    },
 4+4:{
    "momenta": ("-q2","-k1+p1-q1","k1+p2"),
    "indices": (-4+4+1,8+4+1,5+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,4+4,3+4)
    }
},
"overall_factor": "+1"
}
)


graphs.append(
{
"edges":{
(-1+4):{
    "name":"p1",
    "type": "in",
    "momentum": "p1",
    "indices": (-1+4+1,),
    "vertices": (-1+4+1,1+4)
 },
(-3+4):{
    "name":"p2",
    "type": "in",
    "momentum": "p2",
    "indices": (-3+4+1,),
    "vertices": (-3+4+1,4+4)
 },
(-2+4):{
    "name": "p3",
    "type": "out",
    "momentum": "q1",
    "indices": (-2+4+1,),
    "vertices":(2+4,-2+4+1)
 },
(-4+4):{
    "name": "p4",
    "type": "out",
    "momentum": "q2",
    "indices": (-4+4+1,),
    "vertices":(3+4,-4+4+1)
 },
(1+4):{
    "name":"q"+str(1),
    "type": "virtual",
    "momentum": "k1",
    "indices": (2+4+1,1+4+1,),
    "vertices":(1+4,2+4)
 },
(2+4):{
    "name":"q"+str(2),
    "type": "virtual",
    "momentum": "k1-p1",
    "indices": (4+4+1,3+4+1,),
    "vertices":(3+4,1+4)
 },
(3+4):{
    "name":"q"+str(3),
    "type": "virtual",
    "momentum": "-k1+q1",
    "indices": (6+4+1,5+4+1,),
    "vertices":(4+4,2+4)
 },
(4+4):{
    "name":"q"+str(4),
    "type": "virtual",
    "momentum": "k1-p1+q2",
    "indices": (8+4+1,7+4+1,),
    "vertices":(4+4,3+4)
 },

},
"nodes": {
 -1+4+1:{
    "momenta": ("p1"),
    "indices": (-1+4+1,),
    "vertex_id": -1,
    "edge_ids": (-1+4,)
 },
 -3+4+1:{
    "momenta": ("p2"),
    "indices": (-3+4+1,),
    "vertex_id": -1,
    "edge_ids": (-3+4,)
 },
 -2+4+1:{
    "momenta": ("q1"),
    "indices": (-2+4+1,),
    "vertex_id": -2,
    "edge_ids": (-2+4,)
 },
 -4+4+1:{
    "momenta": ("q2"),
    "indices": (-4+4+1,),
    "vertex_id": -2,
    "edge_ids": (-4+4,)
 },
 1+4:{
    "momenta": ("-k1","k1-p1","p1"),
    "indices": (2+4+1,3+4+1,-1+4+1),
    "vertex_id": 0,
    "edge_ids": (1+4,2+4,-1+4)
    },
 2+4:{
    "momenta": ("-q1","-k1+q1","k1"),
    "indices": (-2+4+1,5+4+1,1+4+1),
    "vertex_id": 0,
    "edge_ids": (-2+4,3+4,1+4)
    },
 3+4:{
    "momenta": ("-q2","-k1+p1","k1-p1+q2"),
    "indices": (-4+4+1,4+4+1,7+4+1),
    "vertex_id": 0,
    "edge_ids": (-4+4,2+4,4+4)
    },
 4+4:{
    "momenta": ("-k1+p1-q2","k1-q1","p2"),
    "indices": (8+4+1,6+4+1,-3+4+1),
    "vertex_id": 0,
    "edge_ids": (4+4,3+4,-3+4)
    }
},
"overall_factor": "+1"
}
)


