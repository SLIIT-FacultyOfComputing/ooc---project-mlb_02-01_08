class NewsFeed
{
  private:
    int newsID;
    char newsTopic[20];
    int date;
    char duration[20];

  public:
    void setNewsfeedDetails(int nID, const char nTopic[],int nDate, const char nDuration[]);
    void displayNewsfeedDetails();
};