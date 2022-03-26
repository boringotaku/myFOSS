// day 1

class disease : public patient {
  std::string diseaseName;
  std::string doctor;
  public:
    disease(std::string dis="common cold", std::string doc="general"){
      diseaseName = dis;
      doctor      = doc;
    }
    void getInfo();
};

void disease::getInfo() {
  patient::getInfo();
  std::cout << diseaseName << std::endl;
  std::cout << doctor << std::endl;
}

