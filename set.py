from modules.operations import Vector


class Set:
    def __init__(self,dict_) -> None:
        self.pixel_size: int = dict_["pixel_size"]
        self.distance: float = dict_["distance"]
        self.vector_up: list = dict_["up"]
        self.obejtcts: list = dict_["objects"]
        self.background_co: list = dict_["background_color"]
        self.eye: list = dict_["eye"]
        self.look_at_cam: list = dict_["look_at_cam"]
        self.height_res: int = dict_["height_res"]
        self.width_res: int = dict_["width_res"]
### Falta colocar a base ortonormal
### calcular o centro da tela 
### calcular o q00
### 